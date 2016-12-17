
// Unsolved

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

    int h,n;

    while(cin >> h >> n){

        int x = 0;

        for(int i=0,k;i<n;i++){
            cin >> k;
            x += k;
        }

        if(h <= x){
            cout << "Project will finish within 1 day." << endl;
        }
        else{
            int t = h/x;
            if(h%x == 0){
                printf("Project will finish within %d day.\n", h/x);
            }
            else{
                printf("Project will finish within %d days.\n", (h/x)+1);
            }
        }

    }

    return 0;
}
