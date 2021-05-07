#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=n;i>=1;i--)
	{
		ans=(i-1)*i+ans;
	}
	printf("%d\n",ans);
}

or

#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d,",&n);
	for(int i=1;i<=n-1;i++)
		ans+=i*(i+1);
	printf("%d\n",ans);
}
