#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int maxDivide(lli a, lli b)
{
  while (a%b == 0)
    a = a/b;


  return a;
}

/* Function to check if a number is ugly or not */
int isUgly(lli no)
{
  no = maxDivide(no, 3);
  no = maxDivide(no, 5);
  no = maxDivide(no, 7);

  return (no == 1)? 1 : 0;
}

int main ()
{
    int tc;
    lli n;

    cin >> tc;

    for(int i=0;i<tc;i++){
        cin >> n;
        if(isUgly(n)){
            printf("Case %d: Yes\n",i+1);
        }
        else{
            printf("Case %d: No\n",i+1);
        }
    }

    return 0;
}
