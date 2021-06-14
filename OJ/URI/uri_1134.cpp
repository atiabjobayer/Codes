#include <bits/stdc++.h>
using namespace std;

int main()
{

    int al=0,dis=0,gas=0;

    while(1){
        int code;
        cin >> code;
        if(code == 1)
            al++;
        else if(code == 2)
            gas++;
        else if(code == 3)
            dis++;
        else if(code == 4)
            break;
        else{
            continue;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;
}
