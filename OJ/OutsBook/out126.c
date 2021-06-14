#include <stdio.h>
int main()
{
    int x,y,t,t1;

    scanf("%d%d%d%d",&x,&y,&t,&t1);

    int c1 = t - (x*t1);

    printf("%d Taka\n",c1/y);

    return 0;
}
