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
        double n;
        cin >> n;
        double sq = sqrt(n);

        printf("Case %d: %0.0lf\n",i,floor(sq));
    }

    return 0;
}
