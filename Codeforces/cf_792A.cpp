#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

vector <int> v;

int main ()
{
    int n,mn = 0,cnt = 0;

    bool flag = true;

    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);

        // -2 0 2

        // 6 -3 0 2

        if(v.size() > 1){
            for(int j=0;j<v.size()-1;j++){
                int y = v[j];

                if(flag)mn = abs(x-y);

                cout << mn << endl;

                flag = false;

                if(abs(x-y) < mn){
                    mn = abs(x-y);
                    cnt = 0;
                }

                if(abs(x-y) == n)cnt++;
            }
        }
    }

    cout << mn << " " << cnt << endl;

    return 0;
}
