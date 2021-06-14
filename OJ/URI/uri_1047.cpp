
// Unsolved

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int sh,sm,eh,em;
    // 7 7 7 7

    cin >> sh >> sm >> eh >> em;

    int dh = 0, dm = 0;

    if(sm >= em){
        int t = 60 - sm;
        dm = t + em;
    }
    else{
        dm = em - sm;
    }

    cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;

    return 0;
}

