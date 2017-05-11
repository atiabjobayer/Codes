#include <bits/stdc++.h>
#define PI 3.1416
using namespace std;

int main()
{
    float d,f;

    while(cin >> d >> f){
        float t = 0.75;
        float l = PI*2*t;
        float s = l*25;

        float dist = d*2;
        float tm = dist/s;

        if(tm < s){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
