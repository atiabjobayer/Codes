#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    string a;

    while(getline(cin , a)){

        for(int i=0;i<a.size();i++){
            if(!((a[i]>= 'a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))){
                a[i] = ' ';
            }
        }

        stringstream ss(a);
        string buff;
        int cnt = 0;
        while(ss >> buff)cnt++;

        cout << cnt << endl;
    }

    return 0;
}
