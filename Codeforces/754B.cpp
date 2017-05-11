#include <bits/stdc++.h>
using namespace std;

int main()
{
    char game[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> game[i][j];
        }
    }

    /*
        .o..
        ..o.
        ..x.
        .x..
    */

    bool possible = false;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(game[i][j] != '.'){
                continue;
            }

            if(i == 0 && j == 0){
                if(game[i][j+1] == 'o' && game[i][j+2] == '0'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j+1] == 'o' && game[i+2][j+2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 0 && j == 1){
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j+1] == 'o' && game[i+2][j+2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 0 && j == 2){
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 0 && j == 3){
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 1 && j == 0){
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j+1] == 'o' && game[i+2][j+2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 1 && j == 1){
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j+1] == 'o' && game[i+2][j+2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 1 && j == 2){
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 1 && j == 3){
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i+1][j] == 'o' && game[i+2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 2 && j == 0){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j+1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = false;
                    break;
                }
            }
            else if(i == 2 && j == 1){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = false;
                    break;
                }
                if(game[i-1][j+1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 2 && j == 2){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 2 && j == 3){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 3 && j == 0){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j+1] == 'o' && game[i-2][j+2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 3 && j == 1){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j+1] == 'o' && game[i][j+2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j+1] == 'o' && game[i-2][j+2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 3 && j == 2){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }
            else if(i == 3 && j == 3){
                if(game[i-1][j] == 'o' && game[i-2][j] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i][j-1] == 'o' && game[i][j-2] == 'o'){
                    possible = true;
                    break;
                }
                if(game[i-1][j-1] == 'o' && game[i-2][j-2] == 'o'){
                    possible = true;
                    break;
                }
            }

        }
    }

    if(possible){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
