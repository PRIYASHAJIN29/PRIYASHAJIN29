#include <stdio.h>

int main()
{
    int num,i=0,j=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
        for(j=0;j<(num)-(i);j++)
           printf("*");
           printf("\n");
        }

    return 0;
}
