#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    if(n%2==0)
        n++;

    for(int i=0;i<12;i+=2){
        cout << n+i << endl;
    }

    return 0;
}
