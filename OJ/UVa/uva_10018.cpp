#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //freopen("test/in.txt", "r", stdin);
    //freopen("test/out.txt", "w", stdout);

    long long int t;

    cin >> t;

    while(t--){

        string num;

        long long int sum = 0;

        cin >> num;

        string num_rev(num.rbegin(), num.rend());

        long long int x = stoi(num);
        sum += x;
        long long int y = stoi(num_rev);
        sum += y;
        long long int i = 0;

        for(i=1;; i++){
            num = to_string(sum);
            string t(num.rbegin(), num.rend());
            num_rev = t;
            if(num == num_rev)
                break;
            y = stoi(num_rev);
            sum += y;
        }

        cout << i << " " << sum << endl;

    }

    return 0;
}

