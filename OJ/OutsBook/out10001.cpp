// Unsolved WA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm;
    char t;
    string format;

    while(cin >> hh >> t >> mm){
        if(hh < 12){
            format = "A.M.";
        }
        else{
            hh = hh - 12;
            format = "P.M.";
        }

        if(hh < 10){
            cout << '0';
        }
        cout << hh << ":" ;
        if(mm < 10){
            cout << '0';
        }
        cout << mm << " " << format << endl;
    }

    return 0;
}
