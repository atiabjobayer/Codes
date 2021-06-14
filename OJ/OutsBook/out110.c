#include <stdio.h>
int main()
{
    int r1,r2;

    scanf("%d%d",&r1,&r2);

    int t1 = r1*6*5;
    int t2 = r2*4*5;

    int t3 = t1+t2;

    int t4 = t3/5;

    printf("%d\n",t4/10);

    return 0;
}
