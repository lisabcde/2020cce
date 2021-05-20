#include <stdio.h>
int main()
{
	int a,ans=0;
	while (scanf("%d",&a)!=EOF)//End Of File
	{
		ans++;
	}
	printf("%d",ans-1);
}