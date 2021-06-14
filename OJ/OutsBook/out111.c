#include <stdio.h>
int main()
{
    int x,y,m;

    scanf("%d%d%d",&x,&y,&m);

    int t1 = (x*3)-(y*3);

    int f = m+t1;

    printf("%d\n",f);

    return 0;
}
