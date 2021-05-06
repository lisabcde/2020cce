#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Enter two numbers:  ");
	if(a==b&&b==a)printf("It is a square ");
	else printf("It is not a square ");
}