#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int f91(lli n)
{
    if(n <= 100){
        return f91(f91(n+11));
    }
    else if(n >= 101){
        return n - 10;
    }
}

int main ()
{
    //read(test/in.txt);
    //write(test/out.txt);

    lli n,m;

    while(1){
        cin >> n;
        if(n == 0)
            break;
        else
            m = f91(n);
            printf("f91(%lli) = %lli\n",n,m);
    }

    return 0;
}

