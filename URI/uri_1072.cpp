#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t,x;
    int n = 0;

    cin >> t;
    x = t;

    while(x--){
        int m;
        cin >> m;
        if(m >= 10 && m <= 20){
            n++;
        }
    }

    cout << n << " in" << endl;
    cout << t - n << " out" << endl;

    return 0;
}
