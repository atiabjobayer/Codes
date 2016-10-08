#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int n;

    cin >> n;

    int ara[n];

    for(int i=0,k;i<n;i++){
        cin >> ara[i];
    }

    if(ara[n-1] == 15){
        cout << "DOWN" << endl;
    }
    else if(ara[n-1] == 0){
        cout << "UP" << endl;
    }
    else if(n == 1 ){
        cout << "-1" << endl;
    }
    else{
        if(ara[n-2] - ara[n-1] < 0){
            if(ara[n-1] == 15){
                cout << "DOWN" << endl;
            }
            else{
                cout << "UP" << endl;
            }
        }
        else if(ara[n-2] - ara[n-1] > 0){
            if(ara[n-1] == 0){
                cout << "UP" << endl;
            }
            else{
                cout << "DOWN" << endl;
            }
        }
    }

    return 0;
}
