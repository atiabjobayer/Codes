#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;

    cin >> n;

    for(int i=0;;i+=4){
        x++;
        cout << i+1 << " " << i+2 << " " << i+3 << " " << "PUM" << endl;
        if(x == n)
            break;
     }

    return 0;
}
