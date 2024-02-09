#include <stdio.h>

int main()
{
    int num,i=0,j=0,sp=0,temp;
    scanf("%d",&num);
    temp=num;
    for(i=0;i<num;i++)
    {
       temp=1;
        for (int sp= 0; sp<i; sp++)
			printf(" ");
		for (int j = 0;j<i+1 ;j++)
			printf("%c ",(temp++)+64);
        temp=1;
        for (int sp= 0; sp<num; sp++)
			printf(" ");
		for (int j = 0;j<num-i ;j++)
			printf("%c ",(temp++)+64);
		printf("\n");
		printf("\n");
	
	}
	return 0;
}
