// Unsolved
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool checker(string a)
{
    for(int i=0;i<a.size();i++){
        if(a[i] >= '0' && a[i] <= '9'){
            continue;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}

int main(int argc, char const *argv[]) {

    string str;
    vector <string> words,a,b;

    cin >> str;

    for(int i = 0 ; i < str.size() ; i++){

    }

    return 0;
}
