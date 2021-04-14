#include <stdio.h>
int main()
{
   char a[100];//包含0
   int i,x,n,count=0;
   for( i=0;i<100;i++){
       scanf("%d",&a[i]);
       if(a[i]==0) break;}
       
   scanf("%d",&x);//找X在數列中出現的次數
   n=i;//紀錄陣列個數
   
   for(int i=0;i<n;i++){
   if(a[i]==x) count++;
   }
   
   printf("%d\n",count);
}
