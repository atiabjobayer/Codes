#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n = 0;

    for(int i=0;i<6;i++){
        double t;
        cin >> t;
        if(t >= 0)
            n++;
    }

    cout << n << " valores positivos" << endl;

    return 0;
}
