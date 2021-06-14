#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t;

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        if(n == 0){
            cout << "NULL" << endl;
        }
        else if(n%2==0){
            cout << "EVEN ";
        }
        else{
            cout << "ODD ";
        }

        if(n > 0){
            cout << "POSITIVE" << endl;
        }
        else if(n < 0){
            cout << "NEGATIVE" << endl;
        }

    }

    return 0;
}
