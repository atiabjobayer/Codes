#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    for(int i=0;i<tc;i++){
        string str;
        int n;
        cin >> n;
        getline(cin,str);

        str.erase (str.begin()+0);
        str.erase (str.begin()+(n-1));

        cout << i+1 << " " << str << endl;
    }

    return 0;
}
