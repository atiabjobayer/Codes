#include <bits/stdc++.h>
#define MAX 26
#define pb(x) push_back(x)
#define read() freopen("in.txt", "r", stdin)
#define print(x) cout << (#x) << " = " << x << endl

using namespace std;
typedef long long int lli;

vector< int > adj[MAX];
queue< int > q;

int vis[MAX], par[MAX];

void bfs(int S) {
    q.push(S);
    vis[S] = 1;
    par[S] = S;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (vis[v])
                continue;

            q.push(v);

            vis[v] = 1;
            par[v] = u;
        }
    }

    // if (!vis[E]) {
    //     cout << "No Path Available" << endl;
    // }
    // else {
    //     for (int u = E; u != S; u = par[u])
    //         path.pb(u);

    //     path.pb(S);

    //     reverse(path.begin(), path.end());

    //     for (int x : path)
    //         cout << x << " ";

    //     cout << endl;
    // }
}

int main() {
    // read();
    int tc;
    scanf("%d", &tc);

    char c, d;

    string a;

    getchar();
    getchar();

    for (int t = 1; t <= tc; t++) {
        scanf("%c", &c);
        memset(par, -1, sizeof(par));

        getchar();

        // for (int i = 1; i <= c - 'A' + 1; i++) {
        //     par[i] = i;
        // }
        while (getline(cin, a) && a != "") {
            // cout << a << endl;

            int x = a[0] - 'A';
            int y = a[1] - 'A';

            // cout << x << " " << y << " connected" << endl;

            adj[x].pb(y);
            adj[y].pb(x);
        }

        // memset(par, -1, sizeof(par));
        memset(vis, 0, sizeof(vis));

        // print(c);

        int counter = 0;

        if (c - 'A' > 0) {
            bfs(0);

            for (int i = 1; i <= c - 'A'; i++) {
                // printf("vis[%d] = %d\n", i, vis[i]);
                if (vis[i] == 0) {
                    counter++;
                    // cout << "ekbar " << i << endl;
                    bfs(i);
                }
            }
            counter++;
        }
        else {
            counter = 1;
        }

        cout << counter << endl;

        if (t != tc) {
            cout << endl;
        }

        for (int i = 0; i < MAX; i++)
            adj[i].clear();
    }

    return 0;
}