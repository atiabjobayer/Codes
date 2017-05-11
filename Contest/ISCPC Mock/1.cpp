#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int main ()
{
    int tc;

    cin >> tc;

    for(int i=0;i<tc;i++){
        bool flag = false;
        int ara[5];

        for(int j=0;j<5;j++){
            cin >> ara[j];
            if(ara[j] == 7){
                flag = true;
            }
        }

        if(flag){
            printf("Case %d: Wow! Lucky 7 found\n",i+1);
        }
        else{
            printf("Case %d: Oops, not found\n",i+1);
        }
    }

    return 0;
}
