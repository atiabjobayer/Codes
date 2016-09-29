
// Unsolved

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double a,b,c;

    cin >> a >> b >> c;

    // 6 6 10

    if((a >= b+c) || (b >= a+c) || (c >= a+b))
        cout << "NAO FORMA TRIANGULO" << endl;
    if((a*a == b*b + c*c) || (b*b == a*a+c*c) || (c*c == a*a+b*b))
        cout << "TRIANGULO RETANGULO" << endl;
    if((a*a > b*b + c*c) || (b*b > a*a+c*c) || (c*c > a*a+b*b))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if((a*a < b*b + c*c) || (b*b < a*a+c*c) || (c*c < a*a+b*b))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if((a == b) && (b == c) && (a == c))
        cout << "TRIANGULO EQUILATERO" << endl;
    if(((a == b) && (a != c)) || ((a==c) && (a!=b)) || ((b==c) && (a!=b)))
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}

