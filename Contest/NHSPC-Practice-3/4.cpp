#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int main ()
{
    int tc;

    cin >> tc; // 8 4 1   5 3 2

    for(int i=1;i<=tc;i++){
        int p,n,k;
        cin >> p >> n >> k;
        if(k >= n){
            printf("Case %d: INF\n",i);
        }
        else{
            printf("Case %d: %d\n",i,(p/n)+k);
        }
    }

    return 0;
}
