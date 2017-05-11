#include <bits/stdc++.h>
#define MAX 10
#define pb(x) push_back(x)
#define pii pair <int,int>
#define read() freopen("in.txt","r",stdin)
#define write() freopen("out.txt","w",stdout)
#define valid(x,y) ((x >= 1 && x <= 8) && (y >= 1 && y <= 8))
#define push_to_queue(m,n) if( valid(m,n) && (! vis[m][n]) ){q.push(pii (m,n));vis[m][n] = 1;dis[m][n] = dis[x][y] + 1;}

using namespace std;
typedef long long int lli;

int vis[MAX][MAX],dis[MAX][MAX];

void bfs(pii S)
{
    queue <pii> q;

    q.push(S);
    vis[S.first][S.second] = 1;
    dis[S.first][S.second] = 0;

    while(! q.empty()){
        pii u = q.front(); q.pop();
        int x = u.first , y = u.second;

        push_to_queue(x-1,y+2); push_to_queue(x+1,y+2);
        push_to_queue(x-1,y-2); push_to_queue(x+1,y-2);

        push_to_queue(x-2,y+1); push_to_queue(x-2,y-1);
        push_to_queue(x+2,y+1); push_to_queue(x+2,y-1);
    }
}

int main()
{
    read();

    string S,D;

    while(cin >> S >> D){
        memset(vis,0,sizeof vis); memset(dis,0,sizeof dis);

        int m = S[0] - 'a' + 1;
        int n = S[1] - '1' + 1;

        int a = D[0] - 'a' + 1;
        int b = D[1] - '1' + 1;

        if(S == D){
            cout << "To get from " << S << " " << D << " takes " << 0  << " knight moves." << endl;
        }
        else{
            bfs(pii (m,n));

            cout << "To get from " << S << " " << D << " takes " << dis[a][b]  << " knight moves." << endl;
        }
    }

    return 0;
}
