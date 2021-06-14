#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int ths,fhd,ohd,t;

    while(cin >> a >> b){
        if(b < a || a%100 != 0){
            cout << "Invalid Transaction" << endl;
        }
        else{
            t = a;

            ths = t/1000;
            t = t - (ths*1000);
            fhd = t/500;
            t = t - (fhd*500);
            ohd = t/100;

            cout << ths+fhd+ohd << endl;
        }
    }

    return 0;
}
