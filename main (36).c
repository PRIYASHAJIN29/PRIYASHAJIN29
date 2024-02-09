#include <stdio.h>

int main()
{
    int num,i=0,j=0,sp=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for (int sp= 0; sp<i; sp++)
        {
			printf(" ");
		}
		for (int j = 0;j<num-i ;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
