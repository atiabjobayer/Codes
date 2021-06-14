#include <bits/stdc++.h>
#define valid(x,y) ((x >= 0 && x <= m) && (y >= 0 && y <= n))
#define read() freopen("in.txt","r",stdin)
#define write() freopen("out.txt","w",stdout)
using namespace std;

char ara[200][200];

int main()
{
    int m,n,tc = 0;

    while(cin >> m >> n){

        if(m == 0 && n == 0){
            break;
        }

        if(tc){
            cout << endl;
        }

        memset(ara,-1,sizeof(ara));

        tc++;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> ara[i][j];
                if(ara[i][j] == '.'){
                    ara[i][j] = 0;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ara[i][j] == '*'){
                    if(valid(i,j+1) && ara[i][j+1] != '*')ara[i][j+1]++;
                    if(valid(i,j-1) && ara[i][j-1] != '*')ara[i][j-1]++;
                    if(valid(i-1,j) && ara[i-1][j] != '*')ara[i-1][j]++;
                    if(valid(i+1,j) && ara[i+1][j] != '*')ara[i+1][j]++;
                    if(valid(i-1,j-1) && ara[i-1][j-1] != '*')ara[i-1][j-1]++;
                    if(valid(i-1,j+1) && ara[i-1][j+1] != '*')ara[i-1][j+1]++;
                    if(valid(i+1,j-1) && ara[i+1][j-1] != '*')ara[i+1][j-1]++;
                    if(valid(i+1,j+1) && ara[i+1][j+1] != '*')ara[i+1][j+1]++;
                }
            }
        }

        printf("Field #%d:\n",tc);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ara[i][j] == '*'){
                    printf("*");
                }
                else{
                    printf("%d",ara[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
