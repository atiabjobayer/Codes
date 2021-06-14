#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,process=0;

    cin >> n;

    while(n!=1){
        if(n%2 == 1){
            n = (n*3)+1;
        }
        else{
            n = n/2;
        }
        process++;

    }

    cout << process << endl;

    return 0;
}
