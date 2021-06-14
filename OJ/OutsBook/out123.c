#include <stdio.h>
int main()
{
    int d,x,y;
    scanf("%d%d%d",&d,&x,&y);
    int t1 = x/(d*12);

    printf("%d Taka\n",t1*y);

    return 0;
}
