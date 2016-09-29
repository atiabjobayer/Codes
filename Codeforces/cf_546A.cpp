#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int k , n , w;

    cin >> k >> n >> w;

    int sum = 0;

    for(int i = 1;i <= w; i++){
        sum = sum + (i*k);
    }

    // 1 2 1

    int res = sum - n;

    if(res <= 0){
        res = 0;
    }

    cout << res << endl;

    return 0;
}
