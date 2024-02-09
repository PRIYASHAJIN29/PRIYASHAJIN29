#include <stdio.h>
#include <string.h>

void main()
{
    char arr[20];
    int i,len;
    char temp;
    scanf("%s",arr);
    len=strlen(arr);
    for(i=0;i<len/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
      printf("%s",arr);    
}
