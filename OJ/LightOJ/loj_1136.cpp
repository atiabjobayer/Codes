#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main ()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int tc;

    cin >> tc;

    for(int i=1;i<=tc;i++){
        lli a,b,cnt=0;
        cin >> a >> b;

        a--;

        lli sum = (a*(a+1))/2;

        //cout << sum << endl;

        for(lli j=a+1;j<=b;j++){
            sum += j;
            //cout << sum << endl;
            if(sum%3 == 0)cnt++;
        }

        printf("Case %d: %lli\n",i,cnt);
    }

    return 0;
}
