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
        int a,b,c;

        cin >> a >> b >> c;

        if(((a+b+c)%180 == 0) &&(a != 0) &&(b!=0) &&(c!=0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
