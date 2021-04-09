#include <stdio.h>
int main()
{
  int i=0;
  char a[100];
  scanf("%s",&a);

  while (a[i]!='\0'){
  	if(a[i]!='2')
  		printf("%c",a[i]);
  		i++;
  }
  printf("\n");
}