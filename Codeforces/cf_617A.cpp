#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int n;

    cin >> n;

    if(n%5 == 0){
        cout << n/5 << endl;
    }
    else{
        cout << (n/5)+1 << endl;
    }

    return 0;
}
