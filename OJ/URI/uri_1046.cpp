#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;

    int dur = 0;

    cin >> a >> b;

    if(a >= b){
        int t = (24 - a);
        dur = t + b;
    }
    else{
        dur = b - a;
    }

    cout << "O JOGO DUROU " << dur << " HORA(S)" << endl;

    return 0;
}

