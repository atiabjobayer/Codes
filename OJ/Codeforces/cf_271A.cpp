#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;

int main ()
{
    int n,num=0;

    cin >> n;

    for(int i=n+1;;i++){
        int ara[4];

        ara[0] = i%10;
        ara[1] = (i/10)%10;
        ara[2] = (i/100)%10;
        ara[3] = (i/1000)%10;

        sort(ara,ara+4);

        if((ara[0] != ara[1]) && (ara[1] != ara[2]) && (ara[2] != ara[3])){
            cout << i << endl;
            break;
        }
    }

    return 0;
}
