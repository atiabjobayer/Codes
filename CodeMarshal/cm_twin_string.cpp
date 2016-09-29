#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

char str_1[MAX + 10], str_2[MAX + 10];

int ara_1[100], ara_2[100];

int main()
{
    int n;
    cin >> n;

    while(n--){

        scanf("%s %s", str_1, str_2);

        memset(ara_1, 0, sizeof(ara_1));
        memset(ara_2, 0, sizeof(ara_2));

        int len = strlen(str_1);

        for(int i = 0; i < len; i++){
            char c = str_1[i];
            int x = c - 'a';
            ara_1[x] = 1;
        }

        for(int i = 0; i < len; i++){
            char c = str_2[i];
            int x = c - 'a';
            ara_2[x] = 1;
        }

        int chk_1 = 0, chk_2 = 0;

        for(int i = 0; i <= 25; i++) if(ara_1[i] == 1) chk_1++;


        for(int i = 0; i <= 25; i++) if(ara_2[i] == 1) chk_2++;

        //cout << chk_1 << ' '<<chk_2<<endl;


        if(chk_1 == chk_2) cout << "yes\n";
        else cout << "no\n" ;

    }


    return 0;
}
