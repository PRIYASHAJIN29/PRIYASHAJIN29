#include <stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   switch(a)
   {
       case 'a':printf("the selected number is a\n");
               int x=0;
               printf("%d",++x);
               break;
       case 'b':printf("the selected number is b\n");
               break;
       default:printf("nothing is matched\n");
   }   
   printf("out of switch");
}
