#include <bits/stdc++.h>

#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)

using namespace std;

int main ()
{
    int n,m,sum=0;

    cin >> n >> m;

    int ara[m];

    for(int i=0;i<m;i++){
        cin >> ara[i];
    }

    sort(ara,ara+m);

    for(int i=0;i<n-1;i++){
        sum += (ara[i+1] - ara[i]);
    }

    cout << sum << endl;

    return 0;
}
