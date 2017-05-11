#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
//typedef long long int lli;

vector <int> bpoint,dpoint;

int main ()
{
    //read();

    int a,b,c,d;

    cin >> a >> b >> c >> d;

    for(int i=0,x;i<1000;i++){
        x = b + i*a;
        bpoint.push_back(x);
    }
    for(int i=0,x;i<1000;i++){
        x = d + i*c;
        dpoint.push_back(x);
    }

    int val = -1;

    vector <int> :: iterator t;

    for(int i=0,x;i<bpoint.size();i++){
        x = bpoint.at(i);
        t = find(dpoint.begin(),dpoint.end(),x);
        if(t != dpoint.end()){
            val = x;
            break;
        }
    }

    cout << val << endl;

    return 0;
}
