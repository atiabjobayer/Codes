#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j,n;

    cin >> j;

    for(int i=0;i<j;i++){
        cin >> n;
        int ara[n];
        for(int a=0;a<n;a++){
            cin >> ara[a];
        }
        if(ara[1]-ara[0] == ara[2]-ara[1]){
            printf("%d\n",ara[n-1]+(ara[1]-ara[0]));
        }
        else{
            printf("%d\n",ara[n-1]*(ara[1]/ara[0]));
        }
    }

    return 0;
}
