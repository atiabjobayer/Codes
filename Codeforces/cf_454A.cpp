#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int d = 1;
    int star = ceil(n/2);

    for(int i=0;i<ceil(n/2.0);i++){
        for(int j=0;j<star;j++){
            cout << "*";
        }
        for(int j=0;j<d;j++){
            cout << "D";
        }
        for(int j=0;j<star;j++){
            cout << "*";
        }
        star--;
        d+=2;
        cout << endl;
    }
    star = 1;
    d-=4;
    for(int i=0;i<floor(n/2.0);i++){
        for(int j=0;j<star;j++){
            cout << "*";
        }
        for(int j=0;j<d;j++){
            cout << "D";
        }
        for(int j=0;j<star;j++){
            cout << "*";
        }
        star++;
        d-=2;
        cout << endl;
    }

    return 0;
}
