#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    vector <int> coin;

    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        coin.push_back(x);
    }

    sort(coin.begin(),coin.end(),greater<int>());

    int total_sum = 0;

    for(int i=0;i<coin.size();i++)
        total_sum += coin[i];

    // 4 3 2 2 1

    int other_val = 0, main_val = 0, poisa = 0;

    other_val = total_sum - main_val;

    for(int i=0;i<coin.size();i++){
        main_val += coin[i];
        poisa++;
        other_val = total_sum - main_val;
        if(main_val > other_val)
            break;
    }

    cout << poisa << endl;


    return 0;
}

