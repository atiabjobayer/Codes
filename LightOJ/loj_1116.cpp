// Unsolved
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[]) {
    //freopen("test/in.txt","r",stdin);
    //freopen("test/out.txt","w",stdout);

    int t;

    cin >> t;

    for(int f=0;f<t;f++){

        lli n,a,b;
        cin >> n;

        if(n%2 == 1){
            cout << "Impossible" << endl;
            continue;
        }

        for(lli i=2;i<=ceil(sqrt(n))+1; i+=2){
            if(n%2 == 0){
                a = i;
                b = n/i;
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}
