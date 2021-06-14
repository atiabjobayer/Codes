#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    freopen("in.txt","r",stdin);

    int t;

    cin >> t;

    queue < pair <int,int> > q;
    priority_queue <int> pq;

    for(int cs = 0 ; cs < t ; cs++){
        int n,pos;

        cin >> n >> pos;

        vector <int> v;

        for(int i=0,k;i<n;i++){
            cin >> k;
            v.push_back(k);
        }

        for(int i=0;i<n;i++){
            q.push( make_pair(a[i] , i) );
            pq.push(v[i]);
        }


    }

    return 0;
}
