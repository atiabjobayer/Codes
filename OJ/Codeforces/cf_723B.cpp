
// WA On Test 6
#include <bits/stdc++.h>
using namespace std;

int count_words( string s ) {
    int word_count( 0 );
    stringstream ss( s );
    string word;
    while( ss >> word ) ++word_count;
    return word_count;
}

int main(int argc, char const *argv[]) {

    //freopen("in.txt","r",stdin);

    int n,x=0,y=0;
    string a,t,alter;

    cin >> n >> a;

    //cout << a << endl;

    // Q(   ) u( U)HG

    for(int i=0;i<a.size();i++){
        if(a[i] == '_'){
            a[i] = ' ';
        }
    }

    for(int i = 0;i<a.size();i++){
        if(a[i] == '('){
            //string t;
            int j = i + 1;
            while(a[j] != ')'){
                t = t + a[j];
                j++;
            }
            t += ' ';
            i = j;
        }
    }

    y = count_words(t);

    for(int i = 0;i<a.size();i++){
        if(a[i] == '('){
            int j = i;
            while(a[j]!=')'){
                a[j] = ' ';
                j++;
            }
            i = j;
        }
    }
    //cout << a << endl;
    for(int i = 0;i<a.size();i++){
        if(a[i] == ')'){
            a[i] = ' ';
        }
    }

    for(int i = 0;i<a.size();i++){
        if(a[i] != ' '){
            int p = 0;
            while(a[i]!=' '){
                p++;
                i++;
            }
            x = max(p,x);
        }
    }

    //cout << a << endl;

    cout << x << " " << y << endl;

    return 0;
}
