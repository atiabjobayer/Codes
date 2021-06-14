#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        if(n%400 == 0){
            cout << "1" << endl;
        }
        else if(n%4 == 0 && n%100 != 0){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }

    return 0;
}
