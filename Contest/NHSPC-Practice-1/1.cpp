#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int tc;

    cin >> tc;

    for(int i=0;i<tc;i++){
        cout << "Case " << i+1 << ":" << endl;
        int routers,locations;
        cin >>  routers >> locations;

        vector <int> rif[routers+1];

        for(int j=0,k,l,m;j<routers;j++){
            cin >> k >> l >> m;
            rif[j].push_back(k);
            rif[j].push_back(l);
            rif[j].push_back(m);
        }

        for(int j=0;j<locations;j++){
            int x,y;
            bool flag = false;
            cin >> x >> y;
            for(int k=0;k<routers;k++){
                double distance = sqrt((y-rif[k][1])*(y-rif[k][1])+(x-rif[k][0])*(x-rif[k][0]));
                if(distance <= rif[k][2]){
                    flag = true;
                }
            }
            if(flag){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
