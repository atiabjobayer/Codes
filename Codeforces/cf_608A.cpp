#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,s;

    cin >> n >> s;

    int tym = 0;

    vector< pair <int,int> > v;

    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end());

    reverse(v.begin(),v.end());

    int cur_flor = s;

    for(int i=0;i<n;i++){
        tym += cur_flor - v[i].first;
        if(tym < v[i].second){
            tym += (v[i].second - tym);
        }
        //cout << tym << endl;
        cur_flor = v[i].first;
    }

    tym+= cur_flor;

    cout << tym << endl;

    return 0;
}
