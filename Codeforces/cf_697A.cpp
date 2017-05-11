// Unsolved - MLE . Needs Math Formula.
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t,s,x;

    cin >> t >> s >> x;

    vector <lli> v;

    for(lli o i=t;i<=x+s;i+=s){
        v.push_back(i);
        if(i!=t){
            lli p = i+1;
            v.push_back(p);
        }
    }

    // for(int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }

    bool flag = binary_search(v.begin(),v.end(),x);

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
