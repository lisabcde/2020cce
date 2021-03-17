# 2020cce

 ## 第1個程式
 
 ```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5/1);
}
 ```
 ## 第2個程式
 
 ```c
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0)a++;
	}
	
	printf("%d\n",a);
}

 ```
  ## 第3個程式
 
 ```c
#include <stdio.h>
int main()
{
	int n,a=0;
	for(int i=1;i<=10;i++){
	scanf("%d",&n);
	if(n%3==0)a++;
	
	}
	
	printf("%d\n",a);
}

 ```
  ## 第4個程式
 
 ```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A");
	else if(n<90&&n>=80)printf("B");
	else if(n<80&&n>=60)printf("C");
	else printf("F");
	
	printf("\n");
}

 ```
  ## 第5個程式
  ```c
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(a%i==0&&b%i==0)
			temp=i;
	}
	for(int i=1;i<=b;i++){
		if(b%i==0&&a%i==0)
			temp=i;
	}
	a=a/temp;
	b=b/temp;
	printf("%d %d\n",a,b);
}
```
  ## 第6個程式
  ```c
#include <stdio.h>
int a[1000];
int main()
{
 int N=0;
 for(int i=0; i<1000; i++){
  scanf("%d",&a[i]);
  if(a[i]==0){
   N=i;
   break;
  }
 }
 
 for(int i=N-1; i>=0;i--){
  printf("%d ",a[i]);
 }
 printf("\n");
}
```
  ## 第7題
  ```c
#include <stdio.h>
int MYPOWER (int a,int b)
{
 int ans=1;
 for(int i=b;i>=1;i--){
  ans=ans*a;
  }
  return ans;
 }


int main(void)
{
 int a,b;
 scanf("%d%d",&a,&b);
 printf("[%d]",MYPOWER(a,b));
 return 0;
}
```
  ## 第8個程式
  ```c
#include <stdio.h>
int main()
{
 int a, ans=0;
 scanf("%d",&a);
 for(int i=a;i>=1;i--){
  ans=(i-1)*i+ans;

  }
 
 printf("%d\n",ans);
}
```
  ## 第9個程式
  ```c
#include <stdio.h>
int main()
{
 printf("Enter two numbers:  ");
 int a,b;
 scanf("%d%d",&a ,&b);
 if(a==b) printf("It is a square ");
 else printf("It is not a square ");
}
```
  ## 第10個程式
  ```c
#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int ans=0;
 ans=(n%10)*1;
 n=n/10;
 ans=(n%10)*2+ans;
 n=n/10;
 ans=(n%10)*4+ans;
 n=n/10;
 ans=(n%10)*8+ans;
 n=n/10;
 printf("%d\n",ans);
}
```
  ## 第11個程式
  ```c
#include <stdio.h>
int main()
{
 int N;
 scanf("%d",&N);
 
 int sum=0;
 int a[1000];
 for(int i=0;i<N;i++){
  scanf("%d",&a[i]);
  sum+=a[i];
  }
 float average;
 average=(float)sum/N;
 float r=0;
 float sumTop=0;
 for(int i=0;i<N;i++){
  if(a[i]>=average){
   sumTop+=a[i];
   r++;
   }
  }
 float averageTop;
 averageTop=(float)sumTop/r;
 printf("均標:%.1f\n",average);
 printf("前標:%.1f\n",averageTop);
}
```
  ## 第12個程式
  ```c
  #include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
  ## week03-1
  ```c
  #include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p = & a[2];
    *p = 222;
    p = p+2;
    *p = 666;
}
```
  ## week03-2
  ```c
  #include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
    p = p+2;
    *p = 666;
            printAll();
    p--;
    *p = 555;
            printAll();
}
```
  ## week03-3
  ```c
  #include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p = p+2;
    *p = 666;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
}
```
  ## week03-4
  ```c
  #include <stdio.h>
  #include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p= (int*) malloc(sizeof(int)*10);
    return 0;
}
```
  ## 基礎題：計算幾週與幾天
  ```c
  #include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 printf("%d %d\n",n/7,n%7);
}
```
  ## 基礎題：計程車資計算
  ```c
  #include <stdio.h>
int main()
{
 int n,a;
 int ans=0,i=0;
 scanf("%d",&n);
 if(n>2000)
 {
  a=100;
  i++;
  if(i>=1)
  {
   a+=5;
  }
  ans=((n-2000)/500)*5+a;
  printf("%d\n",ans);
 }
 else printf("%d\n",100);
}
```
  ## 基礎題：兩數間可被5整除的整數
  ```c
  #include <stdio.h>
int main()
{
 int a,b,c;
 scanf("%d%d",&a,&b);
 if(a>b)
 {
  c=a;
  a=b;
  b=c;
 }
 for(int i=a;i<=b;i++)
 {
  if(i%5==0)printf("%d\n",i);
 }
}
```
  ## 基礎題：整數間最大距離
  ```c
  #include <stdio.h>
int a[10000];
int main()
{
 int min,max;
 for(int i=0;i<3;i++)
 {
  scanf("%d",&a[i]);
  min=a[0];
  max=a[i];
 }
 for(int i=0;i<3;i++)
 {
  if(min>a[i])min=a[i];
  if(max<a[i])max=a[i];
 }
 printf("%d\n",max-min);
}
```
  ## 進階題：計算陣列的平方值
  ```c
  #include <stdio.h>
int a[10];
int b[100];
int main()
{
 int n;
 scanf("%d",&n);
 int ans=1;
 for(int i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
  ans=a[i]*a[i];
  printf("%d,",ans);
 }
 printf("\n");
}
```
  ## 進階題：大小寫轉換
  ```c
  #include <stdio.h>
int main()
{
 char input[11];
 scanf("%s",&input);
 for(int i=0;i<11;i++)
 {
  if('A'<=input[i]&&input[i]<='Z') printf("%c",input[i]+32);
  else if('a'<=input[i]&&input[i]<='z')printf("%c",input[i]-32);
  else if('0'<=input[i]&&input[i]<='9')printf("%c",input[i]);
  else if(input[i]==NULL)break;
 }
 printf("\n");
}
```
