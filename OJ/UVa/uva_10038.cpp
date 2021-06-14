#include <bits/stdc++.h>
#define read(x) freopen(x,"r",stdin)
#define write(x) freopen(x,"w",stdout)
using namespace std;
int main ()
{
    //read("in.txt");
    //write("out.txt");

    int n;

    while(cin >> n){

        vector <int> elements,diff;
        bool flag = true;

        for(int i=0,k;i<n;i++){
            cin >> k;
            elements.push_back(k);
            // if(k < 0)
            //     flag = false;
        }

        //sort(elements.begin(),elements.end());

        for(int i=1;i<elements.size();i++){
            diff.push_back(abs(elements[i] - elements[i-1]));
            //cout << diff.back() << endl;
        }

        sort(diff.begin(),diff.end());

        if(flag){
            for(int i=0;i<diff.size();i++){
                if(diff[i]==i+1)
                    continue;

                flag = false;
                break;
            }
            if(flag)
                cout << "Jolly" << endl;
            else
                cout << "Not jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }

    }


    return 0;
}
