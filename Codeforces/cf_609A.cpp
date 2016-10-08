#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int n,m;
    std::vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n ; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(),v.end());

    reverse(v.begin(),v.end());

    int sum = 0,drive=0;

    for(int i = 0 ;i < v.size() ; i++){
        sum += v[i];
        drive++;
        if(sum >= m){
            break;
        }
    }

    cout << drive << endl;

    return 0;
}
