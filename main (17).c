#include <stdio.h>

int main()
{
    int i,sum=0,num;
    printf("please enter the range :");
    scanf("%d ",&num);
    
    for(i=0;i<=num;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("the sum of even numbers : %d",sum);
    return 0;
}
