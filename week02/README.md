## 進階題：讀入整數反序列印 
```c
#include <stdio.h>
int main()
{
	int a[11],n=0;
	for(int i=0;i<=1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		n=i;
		break;
		}
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 進階題：A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
		ans=ans*a;
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
## 進階題：漸增數列相加
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d,",&n);
	for(int i=1;i<=n-1;i++)
		ans+=i*(i+1);
	printf("%d\n",ans);
}
```
## 基礎題：判別正方形 
```c
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:  ");
	scanf("%d%d",&a,&b);
	if (a==b)printf("It is a square ");
	else printf("It is not a square ");
}
```
## 進階題：2進位轉10進位 
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
## 均標與前標計算 
```c
#include <stdio.h>
int main()
{
	int n,a[100],x=0;
	float avg;
	int ans=0,anstop=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		ans+=a[i];
	}
	avg=(float)ans/n;
	printf("均標:%.1f\n",avg);
	float avgtop;
	for(int i=0;i<n;i++){
		if(a[i]>=avg){
		anstop+=a[i];
		x++;
		}
	}
	avgtop=(float)anstop/x;
	printf("前標:%.1f\n",avgtop);
}
```
