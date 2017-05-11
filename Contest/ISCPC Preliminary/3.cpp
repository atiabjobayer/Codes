#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int chartoi(char c)
{
    if(c == '0')return 0;
    else if(c == '1')return 1;
    else if(c == '2')return 2;
    else if(c == '3')return 3;
    else if(c == '4')return 4;
    else if(c == '5')return 5;
    else if(c == '6')return 6;
    else if(c == '7')return 7;
    else if(c == '8')return 8;
    else if(c == '9')return 9;
}

int main ()
{
    string a;

    while(cin >> a){

        bool flag = false;
        int sum = 0;

        for(int i=0;i<a.size();i++){
            sum += chartoi(a[i]);
        }

        if((sum%3 == 0) && (a[a.size()-1] == '0' || a[a.size()-1] == '5')){
            flag = true;
        }

        if(flag){
            cout << a << " is divisible by 15" << endl;
        }
        else{
            cout << a << " is not divisible by 15" << endl;
        }

    }

    return 0;
}
