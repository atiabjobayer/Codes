#include <stdio.h>
int main ()
{
    int x,y,i;
    char a = '%';
    scanf("%d%d%d",&x,&y,&i);

    printf("%d%c\n",(100*i)/(x*y),a);

    return 0;
}
