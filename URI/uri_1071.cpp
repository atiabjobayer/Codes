// Unsolved

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int x,y,sum=0;

    cin >> x >> y;

    int a = min(x,y);
    int b = max(a,b);

    if(a%2==0)
        a++;

    for(int i=a;i<=b;i= i+2){
        cout << i << endl;
        sum = sum + i;
    }

    cout << "-----------"<< endl;

    cout << sum << endl;

    return 0;
}
