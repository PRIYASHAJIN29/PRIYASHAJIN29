#include <stdio.h>

int main()
{
    int num,i=0,j=0,sp=0,temp;
    scanf("%d",&num);
    temp=num;
    for(i=0;i<num;i++)
    {
       temp=num;
        for (int sp= 0; sp<i; sp++)
        {
			printf(" ");
		}
		for (int j = 0;j<num-i ;j++)
			printf("%d ",temp--);
		printf("\n");
	
	}
	return 0;
}
