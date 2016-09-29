#include <stdio.h>
int main()
{
    int x,y;

    scanf("%d%d",&x,&y);
    int t1 = y-x;

    printf("%d\n",(t1*100)/x);

    return 0;
}
