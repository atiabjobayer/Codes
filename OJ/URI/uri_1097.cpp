#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    for(int i=1, j=7;i<=9;i+=2,j+=2){

        for(int m = j;m >= j - 2; m--){
            printf("I=%d J=%d\n",i,m );
        }
    }

    return 0;
}
