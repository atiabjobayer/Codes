#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int ara[3];

    for(int i=0;i<3;i++){
        cin >> ara[i];
    }

    sort(ara,ara+3);

    int pos = ara[1];

    int dis = abs(pos-ara[0]) + abs(pos-ara[2]);

    cout << dis << endl;

    return 0;
}
