#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t,n=0,pi,qi;

    cin >> t;

    while (t--) {
        cin >> pi >> qi;
        if(qi-pi >= 2){
            n++;
        }
    }

    cout << n << endl;

    return 0;
}
