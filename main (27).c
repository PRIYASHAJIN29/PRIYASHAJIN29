#include <stdio.h>

int main()
{
    int i=0,frog=0,top;
    scanf("%d",&top);
    while(frog<top)
    {
        frog+=2;
        if(frog<top)
        {
            frog--;
            i++;
        }
        else
        {
            break;
        }
    }
    printf("%d",i);
}
