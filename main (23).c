#include <stdio.h>

int main()
{
    int num,i=1,j,flag;
    scanf("%d",&num);
    while(i!=num)
    {
        printf("%d ",i);
        if(i>num)
        break;
        i+=2
    }
    return 0;
}

