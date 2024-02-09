#include <stdio.h>

int main()
{
    int start,end,i=0,j=0;
    int positive=0,negative=0,flag=0;
    scanf("%d %d",&start,&end);
    flag=(start<end)?1:0;
    if(flag)
    {
        for(i=start;i<end;i++)
        {
            if(i>0)
              positive+=i;
            else
              negative+=i;
        }
        printf("%d %d",positive,negative);
    }
    else
      printf("please provide start number lesser than end number");
}
