#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    int n;
    cin >> n;
    for(int b=0;b<n;b++){
            printf("Case %d:\n",b+1);
            scanf("%s",&str);
            int len = strlen(str);

            for(int i = 0; i< len ; i++){
                for(int j=0;j<i+1;j++){
                    printf("%c",str[j]);
                }
                printf("\n");
            }
    }

    return 0;
}
