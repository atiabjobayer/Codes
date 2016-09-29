#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t;

    cin >> t;

    while(t--){
        int x,y,sum = 0;
        cin >> x >> y;
        int a = min(x,y);
        int b = max(x,y);

        a++;

        if(a%2==0)
            a++;

        for(int i=a;i<b;i+=2){
            sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}
