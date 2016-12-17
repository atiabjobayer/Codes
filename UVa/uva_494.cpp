#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    freopen("in.txt","r",stdin);
    string a;
    cin >> a;
    //while(cin >> a){
        for(int i=0;i<a.size();i++){
            if((a[i]>= 'a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){

            }
            else{
                a[i] = ' ';
            }
        }

        cout << CountWords(a);

    //}

    return 0;
}
