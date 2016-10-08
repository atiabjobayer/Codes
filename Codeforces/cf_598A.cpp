#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[]) {

    int t;

    cin >> t;

    while(t--){
        lli n;
        cin >> n;
        lli sum = (n*(n+1))/2;

        for(int i = 0 ; pow(2,i) <= n; i++){
            sum -= 2*pow(2,i);
        }

        cout << sum << endl;
    }

    return 0;
}
