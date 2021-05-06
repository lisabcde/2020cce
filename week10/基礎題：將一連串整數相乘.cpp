#include <stdio.h>
int main()
{
	int a,b,ans=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		printf("Enter a value: ");
		scanf("%d",&b);
		ans*=b;
	}
	printf("Product of the %d values is %d",a,ans);
}