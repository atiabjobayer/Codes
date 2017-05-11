#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

map <char,char> mcc;

void domap()
{
    char c = 'A';
    for(int i=0;i<26;i++){
        mcc[c+i] = ' ';
    }
    c = '1';
    for(int i=0;i<9;i++){
        mcc[c+i] = ' ';
    }

    char let[22] = "AEHIJLMOSTUVWXYZ12358";
    char pal[22] = "A3HILJMO2TUVWXY51SEZ8";

    for(int i=0;i<21;i++){
        mcc[let[i]] = pal[i];
    }
}

void mirrordecode(string str)
{
    for(int i=0;i<str.size();i++){
        if(mcc[str[i]] != ' '){
            str[i] = mcc[str[i]];
        }
    }
}

int main ()
{
    domap();

    string a;

    while(cin >> a){
        bool pal = false;
        bool mir = false;

        string b = a;

        reverse(a.begin(),a.end());

        cout << a << endl;

        if(a == b)pal = true;

        a = b;

        mirrordecode(a);

        cout << a << endl;

        if(a == b)mir = true;

        if(!pal && !mir){
            cout << a << " -- is not a palindrome.";
            continue;
        }
        if(pal && !mir){
            cout << a << " -- is a regular palindrome.";
            continue;
        }
        if(!pal && mir){
            cout << a << " -- is a mirrored string.";
            continue;
        }
        if(pal && mir){
            cout << a << " -- is a mirrored palindrome.";
            continue;
        }


    }

    return 0;
}
