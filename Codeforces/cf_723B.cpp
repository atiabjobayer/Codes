#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

 #define rep(i,a,b) for (int i = a; i <= b; i++)
 #define dep(i,a,b) for (int i = a; i >= b; i--)
 #define vep(i,v) for (int i = 0; i < (int)v.size(); i++)
 #define read(x) scanf("%d", &x)
 #define fill(a,x) memset(a, x, sizeof(a))
 #define mp make_pair
 #define pb push_back

 const int N = 200000 + 5, M = 400000 + 5;

 int n, m, u[M], v[M], s, t, ds, dt, cnt = 0, id[N], from[N][2], fa[N];
 bool con[N][2], link[N][2], need_direct = true;
 vector<pair<int, int> > ans;

 int find(int x) { return fa[x] == x ? x : fa[x] = find(fa[x]); }

 void init() {
    fill(con, false);
    fill(link, false);
    fill(id, 0);
 }

 bool is_st(int x) { return (x == s || x == t); }

int main()
{
    read(n); read(m);
    rep(i,1,m) read(u[i]), read(v[i]);
    read(s); read(t); read(ds); read(dt);

    init();
    rep(i,1,m) {
        if (u[i] == s) con[v[i]][0] = true;
        if (u[i] == t) con[v[i]][1] = true;
        if (v[i] == s) con[u[i]][0] = true;
        if (v[i] == t) con[u[i]][1] = true;
    }

    rep(i,1,n) fa[i] = i;
    rep(i,1,m) {
        int x = u[i], y = v[i];
        if (is_st(x) || is_st(y)) continue;
        int f1 = find(x), f2 = find(y);
        if (f1 != f2) { fa[f1] = f2; ans.pb(mp(x, y)); }
    }

    rep(i,1,n) {
        if (is_st(i)) continue;
        int f = find(i);
        if (!id[f]) { cnt++; id[f] = cnt; }
        int j = id[f];
        if (con[i][0]) { link[j][0] = true; from[j][0] = i; }
        if (con[i][1]) { link[j][1] = true; from[j][1] = i; }
    }

    rep(i,1,cnt)
        if (link[i][0] ^ link[i][1]) {
            if (link[i][0]) { ds--; ans.pb(mp(from[i][0], s)); }
            if (link[i][1]) { dt--; ans.pb(mp(from[i][1], t)); }
        }
        else {
            need_direct = false;
            if ((link[i][0] | link[i][1]) == 0) { printf("No\n"); return 0; }
        }

    bool st_have_linked = false;
    if (need_direct) {
        rep(i,1,m)
            if (is_st(u[i]) && is_st(v[i])) {
                dt--; ds--;
                ans.pb(mp(t, s));
                need_direct = false;
                break;
            }
            if (need_direct) { printf("No\n"); return 0; }
    }
    else
        rep(i,1,cnt) if (link[i][0] & link[i][1]) {
            if (!st_have_linked) {
                ds--; ans.pb(mp(from[i][0], s));
                dt--; ans.pb(mp(from[i][1], t));
                st_have_linked = true;
                continue;
            }
            if (ds >= dt)
                { ds--; ans.pb(mp(from[i][0], s)); }
            else
                { dt--; ans.pb(mp(from[i][1], t)); }
            if (ds < 0 || dt < 0) { printf("No\n"); return 0; }
    }

    if (ds < 0 || dt < 0) { printf("No\n"); return 0; }
    printf("Yes\n");
    vep(i,ans) printf("%d %d\n", ans[i].first, ans[i].second);

    return 0;
}
