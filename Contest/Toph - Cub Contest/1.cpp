#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int n,k;

    cin >> n >> k;

    std::vector<int> v;

    for(int i=0,x;i<n;i++){
        cin >> x;
        v.push_back(x);
    }

    std::vector<int> xors;

    for(int i=0;i<v.size();i+=k){
        int p=0;
        for(int j=i;j<i+k;j++){
            p = p^v[j];
        }
        xors.push_back(p);
    }

    for(int i=0;i<xors.size();i++){
        cout << xors[i] << " ";
    }
    cout << endl;

    return 0;
}
