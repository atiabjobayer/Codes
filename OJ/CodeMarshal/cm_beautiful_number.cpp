#include <bits/stdc++.h>
using namespace std;

// Expected Output 6, 63, 1759360857

int main()
{
    long long int i,j;
    cin >> j;
    for(i=0;i<j;i++){
        long long int n,b=0;
        cin >> n;
        long long int ara[n];
        for(long long int i=0;i<n;i++){cin >> ara[i];}
        long long int limit;
        cin >> limit;
        long long int aray[limit+20] = {0};
        for(long long int p=0;p<n;p++){
            for(long long int q=1;ara[p]*q <=limit;q++){
                aray[ara[p]*q] = 1;
            }
        }
        for(long long int a=0;a<=limit;a++){
            if(aray[a] == 1){b++;}
        }
        printf("%d\n",b);

    }
}
