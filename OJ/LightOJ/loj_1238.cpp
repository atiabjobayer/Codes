#include <bits/stdc++.h>
#define MAX 30
#define pb(x) push_back(x)
#define pii pair <int,int>
#define valid(x,y) ((x >= 0 && x < row) && (y >= 0 && y < col))
#define read() freopen("in.txt","r",stdin)
#define write() freopen("out.txt","w",stdout)

using namespace std;
typedef long long int lli;

char graph[MAX][MAX];

vector <pii> adj[MAX][MAX];

int bfs(pii S, pii E)
{
    queue <pii> q; vector <pii> path;

    int vis[MAX][MAX]; pii par[MAX][MAX];

    memset(vis,0,sizeof(vis)); memset(par,0,sizeof(par));

    while(! q.empty())q.pop();
    path.clear();

    q.push(S); vis[S.first][S.second] = 1;

    while(! q.empty()){
        pii u = q.front(); q.pop();

        for(int i = 0; i < adj[u.first][u.second].size();i++){
            pii v = adj[u.first][u.second][i];

            if(vis[v.first][v.second])continue;

            q.push(v); vis[v.first][v.second] = 1;
            par[v.first][v.second] = u;
        }
    }

    for(pii u = E;u != S;u = par[u.first][u.second])path.pb(u);

    return path.size();
}

int main()
{
    //read();
    //write();
    int tc, row = 0,col = 0;
    cin >> tc;

    for(int t=1;t<=tc;t++){

        memset(graph,0,sizeof(graph));
        for(int i=0;i<row;i++)for(int j=0;j<col;j++)adj[i][j].clear();

        cin >> row >> col;
        pii a,b,c,h;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin >> graph[i][j];
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(valid(i-1,j) && (graph[i-1][j] != '#' && graph[i-1][j] != 'm'))adj[i][j].pb(pii (i-1,j));
                if(valid(i+1,j) && (graph[i+1][j] != '#' && graph[i+1][j] != 'm'))adj[i][j].pb(pii (i+1,j));
                if(valid(i,j-1) && (graph[i][j-1] != '#' && graph[i][j-1] != 'm'))adj[i][j].pb(pii (i,j-1));
                if(valid(i,j+1) && (graph[i][j+1] != '#' && graph[i][j+1] != 'm'))adj[i][j].pb(pii (i,j+1));

                if(graph[i][j] == 'a')a = make_pair(i,j);
                else if(graph[i][j] == 'b')b = make_pair(i,j);
                else if(graph[i][j] == 'c')c = make_pair(i,j);
                else if(graph[i][j] == 'h')h = make_pair(i,j);
            }
        }

        int dis_a = bfs(h,a);
        int dis_b = bfs(h,b);
        int dis_c = bfs(h,c);

        printf("Case %d: %d\n",t,max(dis_a,max(dis_b,dis_c)));
    }

    return 0;
}
