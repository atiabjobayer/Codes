#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

map <int,string> mis;

void psh()
{
    mis[0] = "zero";
    mis[1] = "one";
    mis[2] = "two";
    mis[3] = "three";
    mis[4] = "four";
    mis[5] = "five";
    mis[6] = "six";
    mis[7] = "seven";
    mis[8] = "eight";
    mis[9] = "nine";
    mis[10] = "ten";
    mis[11] = "eleven";
    mis[12] = "twelve";
    mis[13] = "thirteen";
    mis[14] = "fourteen";
    mis[15] = "fifteen";
    mis[16] = "sixteen";
    mis[17] = "seventeen";
    mis[18] = "eighteen";
    mis[19] = "nineteen";
    mis[20] = "twenty";
    mis[100] = "hundred";
}

string bck(char c)
{
    if(c == '2')return "twenty";
    else if(c == '3')return "thirty";
    else if(c == '4')return "forty";
    else if(c == '5')return "fifty";
    else if(c == '6')return "sixty";
    else if(c == '7')return "seventy";
    else if(c == '8')return "eighty";
    else if(c == '9')return "ninety";
}

int main()
{
    int n;

    psh();

    cin >> n;

    if(n <=20 || n == 100){
        cout << mis[n] << endl;
    }
    else{
        string a = to_string(n);
        //int t = n%10;
        cout << bck(a[0]);
        if(n%10 != 0){
             cout << "-" << mis[n%10] << endl;
        }
    }

    return 0;
}
