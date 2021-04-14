#include <stdio.h>
#include <string.h>
int main()
{
   char a[3];
   for(int i=0;i<4;i++){//讀入字元
   scanf("%c",&a[i]);
   }
   if(a[0] == a[3] &&a[1]==a[2])printf("YES\n");//判斷1跟4，2跟3是否一樣
   else printf("NO\n");
}
