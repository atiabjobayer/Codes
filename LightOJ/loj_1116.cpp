#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[]) {
    //freopen("test/in.txt","r",stdin);
    //freopen("test/out.txt","w",stdout);

    int t;

    cin >> t;

    for(int j=1;j<=t;j++){
        lli n,a,b;
        cin >> n;

        bool flag = false;

        if(n%2==0){
            if((n/2)%2==1){
                flag = true;
                a = n/2;
                b = 2;
            }
        }

        if(!flag){
            for(lli i=3;i<n;i+=2){
                if(n%i==0 && (n/i)%2==0){
                    flag = true;
                    a = i;
                    b = n/i;
                }
            }
        }

        if(flag)
            printf("Case %d: %lli %lli\n", j,a,b);
        else
            printf("Case %d: Impossible\n",j );
    }

    return 0;
}
