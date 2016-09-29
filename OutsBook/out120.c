#include <stdio.h>
int main()
{
    int x,y;
    char a = '%';
    scanf("%d%d",&x,&y);

    printf("%d%c\n",(100*(x-y)/1000),a);

    return 0;
}
