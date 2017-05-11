#include <bits/stdc++.h>

#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)

using namespace std;

int main ()
{
    string a,b;

    cin >> a >> b;

    reverse(a.begin(),a.end());

    if(a == b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}
