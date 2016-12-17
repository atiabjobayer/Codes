#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,q;
    cin >> p >> q;

    int a = min(p,q);
    int b = max(p,q);

    for(int i=a+1;i<b;i++){
        if(i%5==2 || i%5==3){
            cout << i << endl;
        }
    }

    return 0;
}
