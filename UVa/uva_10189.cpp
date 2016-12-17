#include <bits/stdc++.h>
#define read(x) freopen(x,"r",stdin)
#define write(x) freopen(x,"w",stdout)

using namespace std;

int main()
{
    //read("in.txt");
    //write("out.txt");
    for(int t=1;;t++){
        int a,b;
        cin >> a >> b;
        if(a==0 && b==0)
            break;

        char graph[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin >> graph[i][j];
                if(graph[i][j] == '.')
                    graph[i][j] = 0;
            }
        }

        //graph[0-1][0]++
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(graph[i][j]=='*'){
                    if(graph[i-1][j] != '*')
                        graph[i-1][j]++;
                    if(graph[i-1][j-1] != '*')
                        graph[i-1][j-1]++;
                    if(graph[i-1][j+1] != '*')
                        graph[i-1][j+1]++;
                    if(graph[i+1][j] != '*')
                        graph[i+1][j]++;
                    if(graph[i+1][j-1] != '*')
                        graph[i+1][j-1]++;
                    if(graph[i+1][j+1] != '*')
                        graph[i+1][j+1]++;
                    if(graph[i][j-1] != '*')
                        graph[i][j-1]++;
                    if(graph[i][j+1] != '*')
                        graph[i][j+1]++;
                }
            }
        }

        cout << "Field #" << t << ":\n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(graph[i][j]=='*'){
                    cout << graph[i][j];
                }
                else{
                    printf("%d", graph[i][j]);
                }
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}
