// Unsolved
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {

    int ara[5][5],posx=0,posy=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> ara[i][j];
            if(ara[i][j] == 1){
                posx = i;
                posy = j;
            }
        }
    }

    //cout << posx << " " << posy << endl;

    int res = abs(2 - posx) + abs(2 - posy);

    cout << res << endl;


    return 0;
}
