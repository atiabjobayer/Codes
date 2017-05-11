#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

#define NUM 100000

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


int main ()
{
    sieve();

    int n,k;

    cin >> n >> k;

    if(n == 1){
        cout << -1 << endl;
    }
    else if(k == 1){
        cout << n << endl;
    }
    else if(binary_search(primes.begin(),primes.end(),n)){
        cout << -1 << endl;
    }
    else{
        int step = 0;

        int x = n;

        vector <int> divs;

        while(! binary_search(primes.begin(),primes.end(),x)){
            for(int i=2;;i++){
                if(x%i == 0){
                    divs.push_back(i);
                    x = x/i;
                    break;
                }
            }
        }
        divs.push_back(x);

//        for(int i=0;i<divs.size();i++){
//            cout << divs.at(i) << " ";
//        }
//        cout << divs.size() << endl;

        if(divs.size() > k){
            int p = divs.size() - k;

            sort(divs.begin(),divs.end());

            int q = 1;

            for(int i=0;i<p+1 ;i++){
                q = q*divs.at(i);
            }

            sort(divs.begin(),divs.end(),greater <int> ());

            for(int i=0;i<k-1;i++){
                cout << divs.at(i) << " ";
            }
            cout << q << endl;
        }
        else if(divs.size() == k){
            for(int i=0;i<divs.size();i++){
                cout << divs.at(i) << " ";
            }
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}
