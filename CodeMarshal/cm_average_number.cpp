#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j,n;

    cin >> j;

    for(int i=0;i<j;i++){
        cin >> n;
        int ara[n];
        int total = 0;
        for(int a=0;a<n;a++){
            cin >> ara[a];
            total = total + ara[a];
        }
        printf("Case %d: %d\n",i+1,total/n);
    }

    return 0;
}
