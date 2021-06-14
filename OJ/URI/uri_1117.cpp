#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int c=0;
    double sum = 0;

    while(1){
        double t;
        cin >> t;
        if(t < 0 || t > 10.00){
            cout << "nota invalida" << endl;
        }
        else{
            c++;
            sum += t;
        }

        if(c == 2)
            break;
    }

    printf("media = %0.2lf\n", sum/2.0);

    return 0;
}
