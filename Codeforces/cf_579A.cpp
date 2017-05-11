#include <bits/stdc++.h>
using namespace std;

int main()
{
    double i;

    cin >> i;

    if(ceil(log2(i)) == floor(log2(i))){
        cout << "1" << endl;
    }
    else{
        double lg = log2(i);
        double t = pow(2,lg);

        cout << (1+(i-t)) << endl;
    }

    return 0;
}
