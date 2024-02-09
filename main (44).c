/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i=0,j=0,sp=0,temp;
    scanf("%d",&num);
    temp=num;
    for(i=0;i<num;i++)
    {
       temp=1;
        for (sp= 0; sp<num-i; sp++)
			printf(" ");
		for (int j = 0;j<i+1 ;j++)
			printf("%c ",(temp++)+64);
        temp=1;
        for (sp= 0; sp<((num*2)-(i*2))-2; sp++)
			printf(" ");
		for (int j = 0;j<i+1 ;j++)
			printf("%c ",(temp++)+64);
		printf("\n");
	}
       for(i=0;i<num*2;i++)
       {
           temp=1;
           for (sp= 0; sp<i; sp++)
			printf(" ");
		for (int j = 0;j<num*2-i;j++)
			printf("%c ",(temp++)+64);
			printf("\n");
       }

    return 0;
}
