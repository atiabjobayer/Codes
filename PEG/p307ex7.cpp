#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    for(int i=0;i<tc;i++){
        int n;
        cin >> n;
        if(n >= 80 && n <= 100){
            cout << "A" << endl;
        }
        else if(n >= 70 && n<= 79){
            cout << "B" << endl;
        }
        else if(n >= 60 && n<= 69){
            cout << "C" << endl;
        }
        else if(n >= 50 && n<= 59){
            cout << "D" << endl;
        }
        else if(n >= 0 && n<=49){
            cout << "F" << endl;
        }
        else{
            cout << "X" << endl;
        }
    }

    return 0;
}
