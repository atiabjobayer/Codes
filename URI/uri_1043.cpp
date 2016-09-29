#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double a,b,c;

    cin >> a >> b >> c;

    bool cond = false;

    if((a+b > c) && (b+c > a) && (a+c > b))
        cond = true;

    if(cond){
        printf("Perimetro = %0.1lf\n",a+b+c);
    }
    else{
        printf("Area = %0.1lf\n",0.5*(a+b)*c);
    }

    return 0;
}
