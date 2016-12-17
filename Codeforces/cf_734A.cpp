#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n;
    cin >> n;
    cin >> a;

    int A=0,D=0;

    for(int i=0;i<a.size();i++){
        if(a[i] == 'A')
            A++;
        else
            D++;
    }

    if(A == D){
        cout << "Friendship" << endl;
    }
    else if(A > D){
        cout << "Anton" << endl;
    }
    else{
        cout << "Danik" << endl;
    }
}
