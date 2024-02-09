#include <stdio.h>
#include <string.h>

void main()
{
   char arr1[10]={'a','b','c','d'};
   char arr2[10];
   strcpy(arr2,arr1);
   printf("%s",arr2);
}
