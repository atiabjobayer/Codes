#include <stdio.h>
int main()
{
    int total=0,j,i;

    scanf("%d",&j);

    for(i=1;i<=j;i++){
        total = total+(i*i);
    }
    printf("%d\n",total);

    return 0;
}
