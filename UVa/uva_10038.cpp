#include <bits/stdc++.h>
#define read(x) freopen(x,"r",stdin)
#define write(x) freopen(x,"w",stdout)
using namespace std;

int diffminus(int a,int b)
{
    if(a > b)
        return a - b;
    else
        return b - a;
}

int main ()
{
    //read("test/in.txt");
    //write("test/out.txt");

    int n;

    while(cin >> n){
        vector <int> v;
        for(int i=0;i<n;i++){
            int t;
            cin >> t;
            v.push_back(t);
        }

        // 1 4 2 3

        vector <int> d1;

        for(int i=0;i<v.size()-1;i++){
            int t = max(v[i+1],v[i])-min(v[i+1],v[i]);
            d1.push_back(t);
        }

        sort(d1.begin(),d1.end(),greater <int>());

        bool flag = true;

        if(n > 1)
            for(int i=0;i < d1.size()-1;i++){
                if(d1[i]-1 == d1[i+1])
                    continue;
                else
                    flag = false;
                    break;
            }

        if(flag)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;

    }

    return 0;
}

