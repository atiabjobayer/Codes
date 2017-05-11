#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int main ()
{
    lli n,div=0,tc;

    cin >> tc;

    for(int t = 1;t<=tc;t++){
        scanf("%lli",&n);

        if(ceil(sqrt(n)) == floor(sqrt(n))){
            printf("Case %d: Odd\n",t);
        }
        else{
            printf("Case %d: Even\n",t);
        }
    }

    return 0;
}
