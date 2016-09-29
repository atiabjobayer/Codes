#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a;

    cin >> a;

    bool cond1 = true,cond2 = false;

    for(int i=0;i<a.size();i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            continue;
        else
            cond1 = false;

    }

    if(! cond1){
        bool temp = false;
        for(int i=1;i<a.size();i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            continue;
        else
            temp = true;

        }
        if((a[0]>='a' && a[0]<='z') && temp == false)
            cond2 = true;
    }

    string word;

    if(cond1){
       for(int i=0;i<a.size();i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;

        }
    }

    if(cond2){
        if(a[0] >= 'a' && a[0] <= 'z')
            a[0] = a[0] - 32;

       for(int i=1;i<a.size();i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;

        }
    }

    word = a;

    cout << word << endl;

    return 0;
}

