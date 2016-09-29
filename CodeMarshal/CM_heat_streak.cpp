#include<bits/stdc++.h>
using namespace std;
#define MAX 10005
int i, j, k, l, x, y, z, m, n, t;
int ara[MAX + 7];

int main()
{
    cin >> t;

    while(t--){

        cin >> n;

        for(int i = 0; i < n; i++) cin >> ara[i];

        int temp =1, ans = 1;

        for(int i = 1; i < n; i++){
            if(ara[i] >= ara[i - 1]) {
                temp++;
                continue;
            }

            else{
               ans = max(ans, temp);
               temp = 1;
            }
        }

        ans = max(ans, temp);

        cout << ans << endl;
    }



    return 0;
}
