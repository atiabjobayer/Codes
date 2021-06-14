#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double salary;

    int increase_rate = 0;

    cin >> salary;

    if(salary >= 0 && salary <= 400.00){
        increase_rate = 15;

    }
    else if(salary >= 400.01 && salary <= 800.00){
        increase_rate = 12;
    }
    else if(salary >= 800.01 && salary <= 1200.00){
        increase_rate = 10;
    }
    else if(salary >= 1200.01 && salary <= 2000.00){
        increase_rate = 7;
    }
    else if(salary > 2000.00){
        increase_rate = 4;

    }

    double total = ((increase_rate*salary)/100) + salary;
    double increased = total - salary;

    printf("Novo salario: %0.2lf\n",total);
    printf("Reajuste ganho: %0.2lf\n",increased);
    printf("Em percentual: %d %\n",increase_rate);


    return 0;
}

