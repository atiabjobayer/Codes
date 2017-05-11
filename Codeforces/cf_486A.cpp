#include <bits/stdc++.h>

#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)

using namespace std;

int main ()
{
    long long int n;

    long long n2;

    cin >> n;

    n2 = n;

    if(n%2 == 0){
        printf("%0.0lf\n",n2/2.0);
    }
    else{
        printf("-%0.0lf\n",ceil(n2/2.0));
    }

    return 0;
}
