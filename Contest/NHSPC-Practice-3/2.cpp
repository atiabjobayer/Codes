#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int main ()
{
    int tc;

    cin >> tc;

    for(int i=1;i<=tc;i++){
        int k,sum=0;
        cin >> k;
        for(int j=0,m;j<k;j++){
            cin >> m;
            sum += m;
        }

        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
