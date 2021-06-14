#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define read() freopen("in.txt" , "r" , stdin)
#define write() freopen("out.txt", "w" , stdout)
#define nfnd(p,q) (find(q.begin(),q.end(),p) == q.end())

using namespace std;
typedef long long int lli;

map < int , vector < int > > ovr,adj;

int main ()
{
    //read();

    int n,m;

    cin >> n >> m;

    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;

        adj[x].pb(y);
        adj[y].pb(x);

        //cout << "Got::: " << x << " " << y << endl;

        if(nfnd(y,ovr[x])){
            //cout << "pushing " << y << " to " << x << endl;
            ovr[x].pb(y);
        }
        if(nfnd(x,ovr[y])){
            //cout << "pushing " << x << " to " << y << endl;
            ovr[y].pb(x);
        }

        for(int j=0;j<ovr[x].size() && ovr[x].size() > 1;j++){
            int a = ovr[x].at(j);
            if(y == a)break;
            if(nfnd(y,ovr[a])){
                //cout << "pushing " << y << " to " << a << endl;
                ovr[a].pb(y);
            }
        }
        for(int j=0;j<ovr[y].size() && ovr[y].size() > 1;j++){
            int a = ovr[y].at(j);
            if(x == a)break;
            if(nfnd(x,ovr[a])){
                //cout << "pushing " << x << " to " << a << endl;
                ovr[a].pb(x);
            }
        }
    }

    bool flag = true;

    for(int i=1;i<=n;i++){
        if(adj[i] != ovr[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
