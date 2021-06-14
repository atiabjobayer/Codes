#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    for(int i=1;i<=9;i += 2){
        for(int j=0;j< 3;j++){
            if(j == 0){
                printf("I=%d J=7\n",i );
            }
            else if(j == 1){
                printf("I=%d J=6\n",i );
            }
            else{
                printf("I=%d J=5\n",i );
            }
        }
    }

    return 0;
}
