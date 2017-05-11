// WA

#include <bits/stdc++.h>
#define read() freopen("in.txt" , "r" , stdin)
#define write() freopen("out.txt", "w" , stdout)
using namespace std;
//typedef long long int lli;

int main ()
{
    vector < int > vpiis,vpiie;

    int c,p;

    cin >> c;

    for(int i=0,s,e;i<c;i++){
        cin >> s >> e;
        vpiis.push_back(e-s);
    }

    cin >> p;

    for(int i=0,s,e;i<p;i++){
        cin >> s >> e;
        vpiie.push_back(e-s);
    }

    sort(vpiis.begin(),vpiis.end());
    sort(vpiie.begin(),vpiie.end());

    if(vpiis.at(0) >= vpiie.at(vpiie.size()-1)){
        cout << 0 << endl;
    }
    else{
        cout << vpiie.at(vpiie.size()-1) - vpiis.at(0) << endl;
    }

    return 0;
}
