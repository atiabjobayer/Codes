#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;

vector <int> pos,neg;

int main()
{
    //freopen("in.txt","r",stdin);

    int tc;

    cin >> tc;

    while(tc--){
        int sum = 0,zero = 0,one = 0,n;

        cin >> n;

        for(int i=0,k;i<n;i++){
            cin >> k;
            if(k == 0)zero++;
            else if(k == 1)one++;
            else if(k > 1)pos.pb(k);
            else if(k < 0)neg.pb(k);
        }

        sort(pos.begin(),pos.end(),greater <int> ());
        sort(neg.begin(),neg.end());


        if(pos.size()){
            for(int i=0;i<pos.size()-1;i+=2){
                sum += pos.at(i) * pos.at(i+1);
            }

            if(pos.size() % 2 == 1)sum += pos.back();
        }
        sum += one;

        if(zero && neg.size()){
            for(int i=0;i<zero;i++)neg.pop_back();
        }

        if(neg.size()){
            for(int i=0;i<neg.size()-1;i+=2){
                sum += neg.at(i) * neg.at(i+1);
            }
        }

        cout << sum << endl;

        pos.clear();
        neg.clear();
    }

    return 0;
}
