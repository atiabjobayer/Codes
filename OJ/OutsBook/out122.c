#include <stdio.h>
int main()
{
    int t,x,y;

    scanf("%d%d%d",&t,&x,&y);

    printf("%d Taka\n",(t-(x+y))*12);

    return 0;
}
