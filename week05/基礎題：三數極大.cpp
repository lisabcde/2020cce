#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)printf("%d",a);
	else if(a<b&&b>c)printf("%d",b);
	else if(a<c&&b<c)printf("%d",c);
	printf("\n");
}