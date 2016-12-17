#include <bits/stdc++.h>
#define read() freopen("in.txt","r",stdin);
#define write() freopen("out.txt","w",stdout);
using namespace std;

int main()
{
    //read();
    //write();

    float a,b,c;

    while(1){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            break;

        float ara[3] = {a,b,c};

        sort(ara,ara+3);

        float temp = sqrt(pow(ara[0],2) + pow(ara[1],2));

        if(temp == ara[2])
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}
