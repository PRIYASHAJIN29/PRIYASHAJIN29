#include <stdio.h>

int main()
{
    int num,i=1,j,flag;
    scanf("%d",&num);
    do{
        printf("%d ",i);
        if(i>num)
        break;
        i+=2;
    
    }
    while(i!=num);
    return 0;
}

