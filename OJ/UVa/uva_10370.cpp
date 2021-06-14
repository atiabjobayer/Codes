#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int f;

    cin >> f;

    while(f--){
        int n,sum=0;
        cin >> n;
        int ara[n];

        for(int i=0;i<n;i++){
            cin >> ara[i];
            sum += ara[i];
        }
        //cout << sum << endl;

        double t = n;
        int solved = 0;
        double av = sum / t;

        //cout << av << endl;

        for(int i=0;i<n;i++){
            if(ara[i] > av){
                solved++;
            }
        }

        //cout << solved << endl;

        double per = (solved*100)/t;

        printf("%0.3lf%\n",per);

    }

    return 0;
}

