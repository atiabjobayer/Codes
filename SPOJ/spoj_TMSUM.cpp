#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector <int> v;

        for(int i=0,k;i<n;i++){
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(),v.end(), greater<int>());

        bool even = true;

        if(v.size()%2){
            even = false;
        }

        int sum = 0;

        if(n == 1){
            cout << v[0] << endl;
            continue;
        }

        if(!even){
            for(int i=0;i<v.size()-2;i+=2){
                sum = sum + v[i]*v[i+1];
            }
            sum += v[v.size()-1];
        }
        else{
            if(v[v.size()-1] == 1){
                for(int i=0;i<v.size()-2;i+=2){
                    sum = sum + v[i]*v[i+1];
                }
                sum = sum + v[v.size()-2] + 1;
            }
            else{
                for(int i=0;i<v.size()-1;i+=2){
                    sum = sum + v[i]*v[i+1];
                }
            }
        }

        cout << sum << endl;

    }

    return 0;
}
