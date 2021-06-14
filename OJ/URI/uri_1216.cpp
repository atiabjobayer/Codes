#include <bits/stdc++.h>
using namespace std;

int main()
{
    double sum = 0,t;
    double c = 0;
    string a;

    while(cin >> a){
        cin >> t;
        c++;
        sum += t;
    }

    printf("%0.1lf\n", sum/c);

    return 0;
}
