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
