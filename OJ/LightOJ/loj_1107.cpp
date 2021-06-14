#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    //freopen("test/in.txt","r",stdin);
    //freopen("test/out.txt","w",stdout);

    int t;

    cin >> t;

    for(int i=1;i<=t;i++){
        int x1,x2,y1,y2,x,y;
        cin >> x1 >> y1 >> x2 >> y2;
        int n;
        cin >> n;
        cout << "Case " << i << ":" << endl;
        while(n--){
            cin >> x >> y;
            if(x >= x1 && x<=x2 && y >=y1 && y<=y2){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        //cout << endl;
    }

    return 0;
}
