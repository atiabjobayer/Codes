#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int n=0;

    for(int i=0;i<a.size();i++){
        if(a[i] == '7' || a[i] == '4')
            n++;
    }

    //cout << n << endl;

     stringstream ss;
     ss << n;
     string s = ss.str();

     bool flag = true;

     for(int i=0;i<s.size();i++){
         if(s[i] == '4' || s[i] == '7'){
             continue;
         }
         else{
             flag = false;
             break;
         }
     }

     if(flag)
        cout << "YES" << endl;
     else
        cout << "NO" << endl;
}
