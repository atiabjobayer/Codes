#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int a,b;

    while(cin >> a >> b){
        if(a <= 0 || b <= 0)
            break;

        int x = min(a,b);
        int y = max(a,b);
        int sum = 0;

        for(int i=x;i<=y;i++){
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << endl;

    }

    return 0;
}
