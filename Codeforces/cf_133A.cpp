#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    bool flag = false;

    cin >> a;

    for(int i=0;i<a.size();i++){
        if(a[i] == 'H' || a[i] == 'Q' ||  a[i] == '9'){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

