/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
   int num=0;
   printf("pre increment %d\n",++num);
   num =0;
   printf("post increment %d\n",num++);
   printf("post increment 2nd line %d\n",num);
   num=0;
   printf("pre decrement %d\n",--num);
   num=0;
   printf("post decrement %d\n",num--);
   printf("post decrement 2nd line %d\n",num);
   return 0;
}
