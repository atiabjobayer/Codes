#include <stdio.h>
int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    int result = ((a-b)/(b-c)*2)+1;

    printf("%d\n",result);

    return 0;
}
