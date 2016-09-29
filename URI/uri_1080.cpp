#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int max=0,pos = 0;

    for(int i=1;i<=100;i++){
        int t;
        cin >> t;
        if(t > max){
            max = t;
            pos = i;
        }
    }

    cout << max << endl << pos << endl;

    return 0;
}
