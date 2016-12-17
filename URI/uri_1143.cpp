#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    cin >> n;

    for(int i=1;;i++){
        x++;
        cout << i << " " << pow(i,2) << " " << pow(i,3) << endl;
        if(x == n)
            break;
    }

    return 0;
}
