#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
char line[2000][80];
char other[80];
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets(other);
	}
	
	qsort(line,n,80,compare);
	
	int ans=1;
	printf("%s ",line[0]);
	for(int i=0;i<n-1;i++){
		if(strcmp(line[i],line[i+1])!=0){
		printf("%d\n",ans);
		printf("%s ",line[i+1]);
		ans=1;
	}else ans++;
	}
	printf("%d\n",ans);
}