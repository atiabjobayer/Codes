#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
//typedef long long int lli;

int main ()
{
    freopen("in.txt" , "r" , stdin);

    int n,m;

    cin >> n >> m;

    bool flag = false;

    vector <int> v;

    for(int i=0;i<m;i++){
        int k;
        cin >> k;

        if(k == 1)flag = true;

        for(int j=0;j<k;j++){
            int x;
            cin >> x;

            if(v.size() > 0){

                vector <int> :: iterator it = find(v.begin(),v.end(),(x*(-1)));

                if(it != v.end())flag = true;

            }

            v.push_back(x);
        }

        v.clear();
    }

    cout << flag << endl;

    return 0;
}
