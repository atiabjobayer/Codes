#include <bits/stdc++.h>
#define read() freopen("in.txt" , "r" , stdin)
#define write() freopen("out.txt", "w" , stdout)
using namespace std;
typedef long long int lli;

queue <int> q;

int doprocess(int n,int m)
{
    for(int i=1;i<=n;i++)q.push(i);

    int x = 0;
    while(q.size() > 1){
        if(x%m == 0){
            //cout << q.front() << endl;
            q.pop();
            x = 0;
        }
        else{
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        x++;
    }

    return q.front();
}

int main ()
{
    read();
    write();

    int n;

    while(1){
        cin >> n;
        if(n == 0)break;
        //cout << doprocess(17,7) << endl;

        for(int i=1;i<n;i++){
            if(doprocess(n,i) == 13){
                cout << i << endl;
                break;
            }
            while(!q.empty())q.pop();
        }
        while(!q.empty())q.pop();
    }

    return 0;
}
