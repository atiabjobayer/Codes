#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int a=0,b=0,c=0,d=0;

    for(int i=0;i<5;i++){
        int t;
        cin >> t;

        if(t%2 == 0){
            a++;
        }
        else{
            b++;
        }

        if(t > 0){
            c++;
        }
        else if(t < 0){
            d++;
        }
    }

    cout << a << " valor(es) par(es)" << endl;
    cout << b << " valor(es) impar(es)" << endl;
    cout << c << " valor(es) positivo(s)" << endl;
    cout << d << " valor(es) negativo(s)" << endl;

    return 0;
}
