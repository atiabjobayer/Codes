#include <bits/stdc++.h>
#define MAX 1010
#define pb(x) push_back(x)
#define pii pair <int,int>
#define read() freopen("in.txt","r",stdin)
#define write() freopen("out.txt","w",stdout)
#define valid(x,y) ((x >= 0 && x < row) && (y >= 0 && y < col))

using namespace std;
typedef long long int lli;

int graph[MAX][MAX],vis[MAX][MAX],dis[MAX][MAX];

vector <pii> adj[MAX][MAX];

void bfs(pii S)
{
    queue <pii> q;

    q.push(S);
    vis[S.first][S.second] = 1;
    dis[S.first][S.second] = 0;

    while(! q.empty()){
        pii u = q.front(); q.pop();
        int x = u.first , y = u.second;

        for(pii v: adj[u.first][u.second]){
            if(vis[v.first][v.second])continue;

            q.push(v);

            vis[v.first][v.second] = 1; dis[v.first][v.second] = dis[u.first][u.second] + 1;
        }
    }
}

int main()
{
    //read();
    //write();
    int row,col;

    while(1){
        cin >> row >> col;
        if(row == 0 && col == 0)break;

        memset(graph,0,sizeof graph);memset(vis,0,sizeof vis);memset(dis,0,sizeof dis);

        int edge; string mines;
        cin >> edge;

        for(int t=0,i,j,k;t<edge;t++){
            cin >> i >> k;

            while(k--){
                cin >> j;
                graph[i][j] = 1;
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(valid(i-1,j) && graph[i-1][j] != 1)adj[i][j].pb(pii (i-1,j));
                if(valid(i+1,j) && graph[i+1][j] != 1)adj[i][j].pb(pii (i+1,j));
                if(valid(i,j-1) && graph[i][j-1] != 1)adj[i][j].pb(pii (i,j-1));
                if(valid(i,j+1) && graph[i][j+1] != 1)adj[i][j].pb(pii (i,j+1));
            }
        }

        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        bfs(pii (x1,y1));

        cout << dis[x2][y2] << endl;
    }

    return 0;
}
