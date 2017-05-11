/***************************************************************************
** Bismillahir Rahmanir Rahim                                             **
** Atiab Jobayer                                                          **
** CodeMarshal >> Toph >> CodeForces >> Hust >> URI >> UVa = atiabjobayer **
** Amtali AK Model Pilot High School                                      **
** Amtali, Barguna.                                                       **
** Founder & COO                                                          **
** CoderzWar Online Judge (http://coderzwar.com)                          **
****************************************************************************
***************************************************************************/

#include <bits/stdc++.h>

#define read(x) freopen(x,"r",stdin)
#define write(x) freopen(x,"w",stdout)
#define pb(x) push_back(x)
typedef long long int lli;

using namespace std;

vector <int> v;

string muls(string s,int n)
{
    string a = s;
    for(int i=1;i<n;i++){
        s = s + a;
    }

    return s;
}

void divisors(int n)
{
    v.push_back(1);
    for(int i=2;i<=ceil(sqrt(n));i++){
        if(n%i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    v.push_back(n);
}

int main()
{
    int tc;

    cin >> tc;

    while(tc--){
        string a;
        cin >> a;

        int ln = a.size();

        divisors(ln);

        for(int i=0;i<v.size();i++){
            int t = v.at(i);
            string temp = a.substr(0,t);
            string x = muls(temp,ln/t);

            if(x == a){
                cout << temp << endl;
                break;
            }
        }

        v.clear();
    }

    return 0;
}



