#include <bits/stdc++.h>

#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)

using namespace std;

int main ()
{
    int n;

    cin >> n;

    vector <int> v;
    vector <int> diff;
    int lng = 1;

    for(int i = 0,k;i<n;i++){
        cin >> k;
        v.push_back(k);
        if(i > 0){
            if(k >= v[i-1]){
                lng++;
            }
            else{
                diff.push_back(lng);
                lng = 1;
            }
        }

    }
    diff.push_back(lng);


    sort(diff.begin(),diff.end());

    cout << diff.back() << endl;


    return 0;
}
