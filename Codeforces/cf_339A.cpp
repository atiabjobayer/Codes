#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    int x=0;
    int i=0,j=0;
    vector <int> num;

    cin >> a;

    // 1+1+30+1+3

    for(i=0;i<a.size();i++){

        if(a[i] == '+')
            continue;
        // 1+30

        string temp;
        for(j=i;j< a.size() && a[j]!='+';j++){
            temp = temp + a[j];
        }
        i = j;
        //cout << temp << endl;

        stringstream convert(temp);

        convert >> x;

        num.push_back(x);
    }

    sort(num.begin(),num.end());

    for(int i=0;i<num.size();i++){
        cout << num[i];
        if(i != num.size() - 1)
            cout << '+';
    }

    return 0;
}
