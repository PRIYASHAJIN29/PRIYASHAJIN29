#include <stdio.h>

int main()
{
    int i=1,count=0,num;
    printf("please enter the range : ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0 && i!=1)
        count++;
    }
    if(count==0)
       printf("the given is a prime number");
    else
       printf("the given is not a prime number");
    return 0;
}
