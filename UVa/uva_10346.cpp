#include <bits/stdc++.h>

using namespace std;

int main ()
{
   //freopen("test/in.txt","r",stdin);
   //freopen("test/out.txt","w",stdout);

   int cig,rec;
   int total = 0;

   while(cin >> cig >> rec){

       total = cig;

       int rem = cig;

       // 58 15
       int t = 0;

       do{
            rem = rem+t;
            int m = rem;
            rem = rem/rec;
            total += rem;
            t = m - (rec*rem);
       }
       while(rem+t >= rec);

       cout << total << endl;

   }
   //cout << endl;

    return 0;
}

