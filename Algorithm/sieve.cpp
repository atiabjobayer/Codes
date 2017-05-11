#include <bits/stdc++.h>
using namespace std;

#define NUM 100

int ara[NUM+10];
vector <int> primes;

void sieve()
{
    memset(ara,0,sizeof(ara));

    ara[2] = 1;
    primes.push_back(2);

    for(int i=3;i<=NUM;i+=2){
        if(ara[i] == 0){
            primes.push_back(i);
            for(int j=2;i*j<=NUM;j++)ara[i*j] = 1;
        }
    }
}

int main()
{
    sieve();

    int tc;

    cin >> tc;

    while(tc--){

        int n;

        cin >> n;

        if(binary_search(primes.begin(),primes.end())){
            cout << "GREEN" << endl;
        }
        else{
            cout << "RED" << endl;
        }

    }

    return 0;
}
