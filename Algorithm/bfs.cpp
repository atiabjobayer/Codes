#include <bits/stdc++.h>
#define MAX 100
#define pb(x) push_back(x)
#define read() freopen("in.txt","r",stdin)
#define write() freopen("out.txt","w",stdout)

using namespace std;
typedef long long int lli;

vector <int> adj[MAX],path;
queue <int> q;

int vis[MAX],par[MAX],dist[MAX];

void bfs(int S, int E)
{
    q.push(S); vis[S] = 1;
    dist[S] = 0; par[S] = S;

    while(! q.empty()){
        int u = q.front(); q.pop();

        for(int v : adj[u]){
            if(vis[v])continue;

            q.push(v);

            vis[v] = 1; par[v] = u;
            dist[v] = dist[u] + 1;
        }
    }

    if(! vis[E]){
        cout << "No Path Available" << endl;
    }
    else{
        for(int u = E;u != S;u = par[u])path.pb(u);

        path.pb(S);

        reverse(path.begin(),path.end());

        for(int x : path)cout << x << " ";

        cout << endl;
    }
}

int main()
{
    read();

    int x,y,mx = 0;

    while(1){
        cin >> x >> y;
        if(x == 0 && y == 0)break;

        mx = max(mx,max(x,y));

        adj[x].pb(y);
        adj[y].pb(x);
    }

    cout << "Enter two nodes to find shortest path: ";

    cin >> x >> y;

    bfs(x,y);

    return 0;
}
