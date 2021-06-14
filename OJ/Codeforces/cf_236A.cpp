#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int ara[26];

    for(int i=0;i<26;i++){
        ara[i] = 0;
    }

    string a;

    cin >> a;

    for(int i=0;i < a.size();i++){
        int t = a[i] - 97;
        ara[t] = 1;
    }

    int dis = 0;

    for(int i = 0; i< 26;i++){
        if (ara[i] == 1) {
            //printf("%d ",ara[i] );
            dis++;
        }
    }

    //cout << dis << endl;

    if(dis%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
