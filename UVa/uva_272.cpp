#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    freopen("in.txt","r",stdin);

    string t,a;

    while (getline(cin, t)) {
    if (t == "^D")
        break;

    a += "\n" + t;
    }

    int i = 0,m=0;
    for (;;) {
        i = a.find('"', i);
        if (i == string::npos) {
            break;
        }
        if(m%2==0){
            a.replace(i, 1, "``");
        }
        else{
            a.replace(i, 1, "''");
        }
        m++;
    }

    a = a.substr(1).append(a.substr(0,1));

    cout << a;

    return 0;
}
