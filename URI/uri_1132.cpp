#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,sum=0;

    cin >> p >> q;

    int a = min(p,q);
    int b = max(p,q);

    for(int i=a;i<=b;i++){
        if(i%13 == 0)
            continue;

        sum += i;
    }

    cout << sum << endl;
}
