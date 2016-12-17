#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int node,edge;

    cin >> node >> edge;

    int graph[node][edge];

    for(int i=0;i<node;i++){
        for(int j=0;j<edge;j++){
            cin >> graph[i][j];
        }
    }

    for(int i=0;i<node;i++){
        for(int j=0;j<edge;j++){
            printf("Node %d : %d\n",i,graph[i][j]);
        }
    }

    return 0;
}
