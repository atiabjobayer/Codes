#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

queue <int> q;

int main ()
{
    int tc;

    cin >> tc;

    for(int t=1;t<=tc;t++){
        int n,k;

        cin >> n >> k;

        for(int i=1;i<=n;i++)q.push(i);

        // 1 2 3 4 5

        int flag = 0;

        while(q.size() > 1){
            flag++;
            if(flag%k == 0){
                q.pop();
                flag = 0;
            }
            else{
                int temp = q.front();
                q.pop();
                q.push(temp);
            }
        }

        printf("Case %d: %d\n",t,q.front());

        while(!q.empty())q.pop();
    }

    return 0;
}
