// Unsolved

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    if(ceil(2.0) == floor(2.0)){
        cout << "YAYYY" << endl;
    }


    for(double i = 0;i <= 2; i += 0.2){
        for(int j=1;j<=3;j++){
            //cout << i << " " << j << endl;
            if(ceil(i) == floor(i)){
                printf("I=%0.0lf J=%0.0lf\n",i,j+i );
            }
            else
                printf("I=%0.1lf J=%0.1lf\n",i,j+i );
        }
    }

    return 0;
}
