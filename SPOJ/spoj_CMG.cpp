// TLE :(

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    scanf("%d", &tc);

    for(int i=0;i<tc;i++){
        multiset <int> ms;
        stack <int> st;
        
        printf("Case %d:\n", i+1);

        int n;

        cin >> n;

        for(int j=0;j<n;j++){
            char ch;
            cin >> ch;
            if(ch  == 'A'){
                int k;
                cin >> k;
                ms.insert(k);
                st.push(k);
            }
            else if(ch == 'R'){
                int temp;
                if(!st.empty()){
                    temp = st.top();
                    st.pop();
                }
                if(!ms.empty()){
                    multiset <int> :: iterator it = ms.lower_bound(temp);
                    ms.erase(it);
                }
            }
            else if(ch == 'Q'){
                if(ms.empty()){
                    cout << "Empty" << endl;
                }
                else{
                    multiset <int> :: iterator it_e = ms.end();
                    it_e--;
                    cout << *it_e << endl;
                }
            }
        }

    }

    return 0;
}
