/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************/
#include <stdio.h>

int main()
{
  int num1;
  scanf("%d",&num1);
  if(num1%2==0 )
  {
      printf("even number");
     
  }
  else
      printf("odd number");
      printf("%s",(num1%2==3)?"even number":"odd number");
}
