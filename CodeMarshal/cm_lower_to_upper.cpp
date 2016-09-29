#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[110];

    cin >> n;
    getchar();
    for(int i=0;i<n;i++){
        gets(str);
        for(int a=0;a<strlen(str);a++){
            if(str[a]>='a' && str[a]<='z'){
                str[a] = str[a] - 32;
            }
        }
        printf("Case %d: %s\n",i+1,str);
    }

    return 0;
}
