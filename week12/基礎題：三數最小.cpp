#include <stdio.h>
int m(int a,int b,int c)
{
	int ans=a;
	if(ans>b)ans=b;
	if(ans>c)ans=c;
	return ans;
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",m(x,y,z));
}