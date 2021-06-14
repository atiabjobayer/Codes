// Unsolved
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[]) {

    lli a ,b;

    cin >> a >> b;

    //a = 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111;
    //b = 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111;


    if(a < b){
        cout << "<" << endl;
    }
    else if(a > b){
        cout << ">" << endl;
    }
    else{
        cout << "=" << endl;
    }

    return 0;
}
