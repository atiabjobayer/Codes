// Unsolved

#include <bits/stdc++.h>
using namespace std;

int tax(n)
{
    int x =0;
    if(n < 3000.00)
        x = 8;
    else if(n < 4500.00)
        x = 18;
    else if(n > 4500.00)
        x = 28;

    return x;
}

int main(int argc, char const *argv[]) {
    double n;

    cin >> n;

    bool flag = false;

    if(n <= 2000.00)
        flag = true;

    while (! flag) {
        double t =
    }

    return 0;
}
