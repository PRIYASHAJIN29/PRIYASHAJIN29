#include <stdio.h>
int main ()
{
  int a, b;
  printf ("please enter the value ofa and b");
  scanf ("%d %d", &a, &b);
  printf("\n please enter your choice \n1.addition \n2.substarction \n3.multiplication \n4.divison");
  int ch;
  scanf("%d",&ch);
  switch(ch)
  {
        case 0: printf ("the addition of two  numbers : %d", a+b);
                break;
        case 1: printf ("the subtraction of two  numbers : %d", a-b);
                break;
        case 2: printf ("the multiplication of two  numbers : %d", a*b);
                break;
        case 3: printf ("the division of two  numbers : %d", a/b);        
                break;
        default:printf("no choice found");       
  }
}