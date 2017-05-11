#include <bits/stdc++.h>
using namespace std;

int chartoi(char a)
{
    if(a == '0')return 0;
    else if(a == '1')return 1;
    else if(a == '2')return 2;
    else if(a == '3')return 3;
    else if(a == '4')return 4;
    else if(a == '5')return 5;
    else if(a == '6')return 6;
    else if(a == '7')return 7;
    else if(a == '8')return 8;
    else if(a == '9')return 9;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    string a,b;

    while(cin >> a >> b){
        if(a == "0" && b == "0")break;

        int length = min(a.size(),b.size());

        int carry = 0;
        int val = 0;

        // 555
        // 555

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        for(int i=0;i<length;i++){
            val = chartoi(a[i]) + chartoi(b[i]) + val;
            if(val > 9){
                carry++;
                val = val/10;
            }
            else{
                val = 0;
            }
        }

        if(carry == 0){
            cout << "No carry operation." << endl;
        }
        else if(carry == 1){
            cout << carry << " carry operation." << endl;
        }
        else{
            cout << carry << " carry operations." << endl;
        }
    }

    return 0;
}
