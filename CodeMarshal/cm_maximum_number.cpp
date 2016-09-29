#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,j,t;

    cin >> j;

    for(int i=0;i<j;i++){
        cin >> x >> y >> z;
        t = max(x,max(y,z));

        printf("Case %d: %d\n",i+1,t);
    }

    return 0;
}
