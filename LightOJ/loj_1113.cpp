#include <bits/stdc++.h>
#define read(x) freopen("x" , "r" , stdin)
#define write(x) freopen("x", "w" , stdout)
using namespace std;
typedef long long int lli;

int main ()
{
    vector < string > sites;

    sites.push_back("http://www.lightoj.com/");

    string command;

    while(1){
        cin >> command;

        if(command == "QUIT")
            break;
        else if(command == "VISIT"){
            string site_name;
            cin >> site_name;
            sites.push_back(site_name);
            cout << site_name << endl;
            it++;
        }
        else if(command == "BACK"){
            if(it < 2)
                cout << "Ignored" << endl;
            else{
                it--;
                cout << *i << endl;
            }
        }
    }

    return 0;
}
