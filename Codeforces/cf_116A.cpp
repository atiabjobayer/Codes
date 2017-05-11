#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,total = 0;

    cin >> t;

    vector <int> pass;

    for(int i=0;i<t;i++){
        int enter,exit;
        cin >> exit >> enter;
        total = (total - exit) + enter;

        pass.push_back(total);
    }

    sort(pass.begin(),pass.end());

    cout << pass[pass.size() - 1] << endl;

    return 0;
}

