#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int stones;

    cin >> stones;

    char node[stones];

    // 00RBG

    for(int i=0;i<stones;i++){
        cin >> node[i];
    }

    for(int i=0;i<stones-1;i++){
        if(node[i] == '0')
            continue;

        if(node[i] == node[i+1])
            node[i] = '0';
    }

    int res = 0;

    for(int i=0;i<stones;i++){
        if(node[i] == '0')
            res++;
    }

    cout << res << endl;

    return 0;
}

