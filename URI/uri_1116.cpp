#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    double a,b;

    int t;

    cin >> t;

    while(t--){
        cin >> a >> b;
        if(b != 0){
            printf("%0.1lf\n",a/b );
        }
        else{
            cout << "divisao impossivel" << endl;
        }
    }

    return 0;
}
