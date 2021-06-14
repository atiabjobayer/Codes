#include <bits/stdc++.h>
using namespace std;

int ara[1010];
vector<int> primes;

void sieve(int limit)
{
    memset(ara,0,sizeof(ara));

    ara[0] = ara[1] = 1;

    for(int i=2;i<=limit;i++){
        if(ara[i] == 1)continue;

        primes.push_back(i);

        for(int j=2;i*j<=limit;j++){
            ara[i*j] = 1;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    sieve(100);

    for(int i=0;i<n;i++){
        cout << primes[i] << endl;
    }

    return 0;
}
