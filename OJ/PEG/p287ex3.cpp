#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<float> v;

    for(int i=0;i<n;i++){
        float k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    printf("%0.2f\n", v[0]);

    return 0;
}
