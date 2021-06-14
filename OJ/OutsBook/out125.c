#include <stdio.h>
int main()
{
    int S1,D1,D2,S2;

    scanf("%d%d%d%d",&S1,&D1,&D2,&S2);

    printf("%d days\n",(S1*D1)/(S1+S2));

    return 0;
}
