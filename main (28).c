#include <stdio.h>

int main()
{
    int i=0,frog=0,top,flg=0;
    scanf("%d",&top);
    while(frog<top)
    {
        if(frog%2==0)
        {
            frog+=2;
            flg=1;
        }
        else
        {
            frog+=3;
            flg=0;
        }
        if(frog<top)
        {
            if(flg)
            frog--;
            else
            frog-=2;
            i++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n ",i);
}
