#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int ctoint(char a)
{
    if(a == '0')return 0;
    else if(a == '1')return 1;
    else if(a == '2')return 2;
    else if(a == '3')return 3;
    else if(a == '4')return 4;
    else if(a == '5')return 5;
    else if(a == '6')return 6;
    else if(a == '7')return 7;
    else if(a == '8')return 8;
    else if(a == '9')return 9;
}

int main ()
{
    int tc;

    cin >> tc;

    for(int i=1;i<=tc;i++){
        string a;
        cin >> a;
        int sum = 0;

        for(int j=0;j<a.size();j++){
            int x = ctoint(a[j]);
            sum += x;
        }

        if(sum%3 == 0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }

    return 0;
}
