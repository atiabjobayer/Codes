#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int a,b;

    while(1){
        cin >> a >> b;
        if(a == b)
            break;

        if(a > b){
            cout << "Decrescente" << endl;
        }
        else{
            cout << "Crescente" << endl;
        }
    }

    return 0;
}
