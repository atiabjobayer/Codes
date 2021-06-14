#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n = 0;
    double sum = 0;
    for(int i=0;i<6;i++){
        double t;
        cin >> t;
        if(t >= 0.00){
            n++;
            sum += t;
        }
    }

    cout << n << " valores positivos" << endl;
    printf("%0.1lf\n",sum/n );

    return 0;
}
