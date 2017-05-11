#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    string h = "hello";

    cin >> a;
    int m = 0;
    bool flag = false;

    for(int i=0;i<a.size();i++){
        if(a[i] == h[m])
          m++;

        if(m == 5){
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
