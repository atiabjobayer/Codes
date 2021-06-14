#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    //freopen("in.txt","r",stdin);

    string t,a;

    while (getline(cin, t)) {
    if (t == "^D")
        break;

    a += "\n" + t;
    }

    a = a.substr(1).append(a.substr(0,1));

    for(int i=0;i<a.size();i++){
        if(a[i] != '\n'){
            a[i] = a[i] - 7;
        }
    }

    cout << a;

    return 0;
}
