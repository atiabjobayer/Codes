#include <bits/stdc++.h>
#define read() freopen("in.txt" , "r" , stdin)
#define write() freopen("out.txt", "w" , stdout)
using namespace std;
//typedef long long int lli;

int conv(string a)
{
    if(a == "Tetrahedron")return 4;
    else if(a == "Cube")return 6;
    else if(a == "Octahedron")return 8;
    else if(a == "Dodecahedron")return 12;
    else if(a == "Icosahedron")return 20;
}

int main ()
{
    //read();

    int t,sum = 0;
    string k;

    cin >> t;

    for(int i=0;i<t;i++){
        cin >> k;
        sum += conv(k);
    }

    cout << sum << endl;

    return 0;
}
