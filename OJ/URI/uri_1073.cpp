#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;

    cin >> n;

    for(int i=2;i<=n;i+=2){
        printf("%d^2 = %d\n",i,i*i );
    }

    return 0;
}
