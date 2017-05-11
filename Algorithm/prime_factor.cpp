#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        factors.push_back(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            factors.push_back(i);
            n = n/i;
        }
    }

    if (n > 2)
        factors.push_back(n);
}

int main ()
{


    return 0;
}
