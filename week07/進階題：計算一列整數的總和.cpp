#include <stdio.h>
int main()
{
   int a,sum=0;
   while (a!=999)//999是終止條件
   {
      printf("Enter an integer ( 999 to end ): \n");
      scanf("%d",&a);//最後的a=999
      sum+=a;
   }
   printf("The total is: %d",sum-999);//減掉最後的a
}