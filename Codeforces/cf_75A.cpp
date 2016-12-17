// Unsolved

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string a,b,sum_with_0_str,sum_without_0_str;
    lli a_with_0,b_with_0,sum_with_0;
    lli a_without_0,b_without_0,sum_without_0;

    cin >> a >> b;

    stringstream stra(a);
    stra >> a_with_0;
    stringstream strb(b);
    strb >> b_with_0;

    sum_with_0 = a_with_0 + b_with_0;

    stringstream strsum;
    strsum << sum_with_0;
    sum_with_0_str = strsum.str();

    for(lli i=0;i<a.size();i++){
        if(a[i] == '0')
            a.erase(i,1);
    }

    for(lli i=0;i<b.size();i++){
        if(b[i] == '0')
            b.erase(i,1);
    }

    for(lli i=0;i<sum_with_0_str.size();i++){
        if(sum_with_0_str[i] == '0')
            sum_with_0_str.erase(i,1);
    }

    sum_without_0_str = sum_with_0_str;

    stringstream str0a(a);
    str0a >> a_without_0;
    stringstream str0b(b);
    str0b >> b_without_0;

    sum_without_0 = a_without_0 + b_without_0;

    lli final_sum;

    stringstream str0sum(sum_without_0_str);
    str0sum >> final_sum;

    if(final_sum == sum_without_0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
