#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a),lenb=strlen(b);//字串長度a b
	if( lena > lenb )printf("1");//a>b
	else if( lena < lenb )printf("-1");//a<b
	else //2字串相等
	{
		printf("%d",strcmp(a,b));
	}
	
}