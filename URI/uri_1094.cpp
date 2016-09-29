#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    //freopen("test/in.txt","r",stdin);

    int t ;
    double sum = 0;

    int cp=0,rp=0,sp=0;

    cin >> t;


    while(t--){
        int n;
        char a;
        cin >> n >> a;
        sum += n;
        if(a == 'C'){
            cp += n;
        }
        else if(a == 'R'){
            rp += n;
        }
        else if(a == 'S'){
            sp += n;
        }
    }

    double t1 = (cp*100)/sum ;
    double t2 = (rp*100)/sum ;
    double t3 = (sp*100)/sum ;

    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << cp << endl;
    cout << "Total de ratos: " << rp << endl;
    cout << "Total de sapos: " << sp << endl;
    printf("Percentual de coelhos: %0.2lf %\n",t1);
    printf("Percentual de ratos: %0.2lf %\n",t2);
    printf("Percentual de sapos: %0.2lf %\n",t3);

    return 0;
}
