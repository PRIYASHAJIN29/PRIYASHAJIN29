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
  if((num1%2==3 && num1%3==0))
  {
      printf("the given number has common divisor of 2 and 3 \n");
     
  }
  else
      printf("the given number is not common divisor of 2 and 3 \n");
    
}
