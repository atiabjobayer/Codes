#include<bits/stdc++.h>
using namespace std;
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

/* Driver function to test above function */
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int day = dayofweek(x, y, z);
    if(day==0){printf("Sunday\n");}
    else if(day==1){printf("Monday\n");}
    else if(day==2){printf("Tuesday\n");}
    else if(day==3){printf("Wednesday\n");}
    else if(day==4){printf("Thursday\n");}
    else if(day==5){printf("Friday\n");}
    else if(day==6){printf("Saturday\n");}

    return 0;
}
