#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--){
        string a,b;
        cin >> a >> b;

        map <char,char> mcc;

        char c = 'a';

        for(int i=0;i<26;i++){
            mcc[c+i] = '0';
        }

        bool flag = true;

        for(int i=0;i<a.size();i++){
            if(mcc[a[i]] == '0')mcc[a[i]] = b[i];
            else{
                if(mcc[a[i]] != b[i]){
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}
