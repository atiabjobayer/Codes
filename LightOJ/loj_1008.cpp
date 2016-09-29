#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;

    cin >> t;

    for(int i=0;i<t;i++){
        int cell;

        cin >> cell;

        int row, col;

        double sq = sqrt(cell);

        row = ceil(sq);


        printf("Case %d: %d %d\n",col,row);
    }

    return 0;
}

