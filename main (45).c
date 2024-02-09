#include <stdio.h>
#include <string.h>

void main()
{
    char arr1[15]={'a','b','c','d','e','f','g','h','i','j','k','l'};
    char arr2[5];
    strcpy(arr2,arr1);
    printf("%s",arr2);
    printf("%d\n", sizeof(arr2));
    printf("%s",arr1);
}
