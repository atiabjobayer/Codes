#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,even=0,odd=0;

    cin >> n;

    int ara[n];

    for(int i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(even > odd){
        for(int i=0;i<n;i++){
            if(ara[i] % 2 == 1){
                cout << i+1 << endl;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(ara[i] % 2 == 0){
                cout << i+1 << endl;
                break;
            }
        }
    }


    return 0;
}
