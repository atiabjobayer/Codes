#include <bits/stdc++.h>
#define MAX 1000
#define pb(x) push_back(x)
#define read() freopen("in.txt","r",stdin)
#define write() freopen("out.txt","w",stdout)
#define nfnd(x,y) find(y.begin(),y.end(),x) == y.end()

using namespace std;
typedef long long int lli;

vector <int> adj[MAX],nodes;
int vis[MAX],dist[MAX];

map < int , int > m,rev_m;

void bfs(int S)
{
    queue <int> q;
    memset(vis,0,sizeof vis);
    memset(dist,-1,sizeof dist);

    q.push(S);
    vis[S] = 1; dist[S] = 0;

    while(! q.empty()){
        int u = q.front(); q.pop();

        for(int v : adj[u]){
            if(vis[v])continue;
            q.push(v);

            vis[v] = 1; dist[v] = dist[u] + 1;
        }
    }
}

int main()
{
    //read();
    //write();

    int nc,t=1;

    while(1){
        cin >> nc;

        if(nc == 0)break;

        for(int i=0;i<MAX;i++)adj[i].clear();nodes.clear();m.clear();rev_m.clear();

        int val = 0;

        for(int i=0;i<nc;i++){
            int x,y;
            cin >> x >> y;

            if(nfnd(x,nodes))nodes.pb(x);if(nfnd(y,nodes))nodes.pb(y);

            if(m[x] == 0){
                val++;
                m[x] = val;
                rev_m[val] = x;
            }

            if(m[y] == 0){
                val++;
                m[y] = val;
                rev_m[val] = y;
            }

            adj[m[x]].pb(m[y]);
            adj[m[y]].pb(m[x]);
        }

        int x,y;

        for(;;t++){
            cin >> x >> y;
            if(x == 0 && y == 0)break;

            bfs(m[x]);

            int cnt = 0;

            for(int p : nodes){
                int d = dist[m[p]];
                if(d > y || d == -1)cnt++;
            }

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",t,cnt,x,y);
        }
    }

    return 0;
}
