#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n = 0;
    for(int i=0;i<5;i++){
        int t;
        cin >> t;
        if(t%2 == 0){
            n++;
        }
    }

    cout << n << " valores pares" << endl;

    return 0;
}
