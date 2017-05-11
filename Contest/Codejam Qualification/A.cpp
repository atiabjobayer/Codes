#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

string str;

bool check()
{
    return ( count(str.begin(),str.end(),'+') == str.size());
}

int main ()
{
    int tc,n,loop = 0;

    cin >> tc;

    for(int t=1;t<=tc;t++){
        cin >> str >> n;

        for(int i=0;i<=str.size()-n;i++){
            if(str[i] == '-'){
                loop++;
                for(int j=0;j<n;j++){
                    if(str[i+j] == '-')str[i+j] = '+';
                    else if(str[i+j] == '+')str[i+j] = '-';
                }
                cout << str << endl;
            }
        }

        int consec = 0;



        cout << loop << endl;

        loop = 0;
        str.clear();
    }

    return 0;
}
