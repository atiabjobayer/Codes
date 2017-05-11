#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int k,l,m,n,d;

    cin >> k >> l >> m >> n >> d;

    int ara[d+10];

    for(int i=0;i<d;i++){
        ara[i] = 0;
    }

    for(int i = 1; k*i <= d ; i++){
        ara[k*i] = 1;
    }
    for(int i = 1; l*i <= d ; i++){
        ara[l*i] = 1;
    }
    for(int i = 1; m*i <= d ; i++){
        ara[m*i] = 1;
    }
    for(int i = 1; n*i <= d ; i++){
        ara[n*i] = 1;
    }

    int safe = 0;

    for(int i=1;i<=d;i++){
        if(ara[i] == 1){
            safe++;
        }
        /*else{
            cout << i << " ";
        }*/
    }
    //cout << endl;

    //if(safe == 1)
        //safe = 0;

    cout << safe << endl;

    return 0;
}
