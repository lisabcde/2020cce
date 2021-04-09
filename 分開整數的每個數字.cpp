#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  
   printf("%d   %d   %d   %d   %d",a/10000,a/1000-a/10000*10,a/100-a/1000*10,a/10-a/100*10,a/1-a/10*10);
}