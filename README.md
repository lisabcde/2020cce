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
  ## 除惡務盡
  ```c
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
  ```
  ## 擲骰統計
  ```c
  #include <stdio.h>
int main()
{
	char count[7]={0},a[100];
	int i=0;
	scanf("%s",&a);
	while(a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
	}
	for(i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
	}
	
}
```
  ## 函數找整數的最大值
```c
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0){
		if((n%10)>max) max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```
  ## 星星的等腰三角形
  ```c
  #include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=0;j<(a-i);j++)
		printf(" ");
		for(int j=0;j<(i*2-1);j++)
		printf("*");
		
	printf("\n");
	}
}
```
  ## 分開整數的每個數字
  ```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	 printf("%d   %d   %d   %d   %d",a/10000,a/1000-a/10000*10,a/100-a/1000*10,a/10-a/100*10,a/1-a/10*10);
}
```
  ## 字元判別
  ```c
  #include <stdio.h>
char a[100];
int main()
{
	scanf("%s",a);
	for(int i=0;i<100;i++){
		if('A'<=a[i]&&a[i]<='Z')printf("U");
		else if('a'<=a[i]&&a[i]<='z')printf("L");
		else if('0'<=a[i]&&a[i]<='9')printf("D");
		else printf("O");
		break;
	}
}
```
  ## 數字之首
  ```c
  #include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",a/1000);
}
```
  ## 輸出從0到N的偶數
  ```c
  #include <stdio.h>
int main()
{
	int a[100],i,N;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		if(i%2==0)printf("%d ",i);
	}
}
```
  ## 字串排序
  ```c
  #include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for (int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(strcmp(line[i],line[j])>0){
				strcpy(temp,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```
  ## 基礎題：計算商數
  ```c
  #include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
  ## 基礎題：三數極大
  ```c
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
```
  ## 基礎題：N數之和
  ```c
  #include <stdio.h>
int main()
{
	int n,ans=0,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		ans+=a[i];
	}
	printf("%d\n",ans);
}
```
  ## 進階題：絕對值函數
  ```c
  #include <stdio.h>
int f(int a)
{
	if(a>0)return a;
	else return a*(-1);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
  ## 進階題：反序數字
  ```c
  #include <stdio.h>
int f(int n)
{
	int p;
	int m=0;
	
	while (n>0){
		p=n%10;
		n=n/10;
		m=p+m*10;
	}
	return m;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	printf("%d+%d=%d\n",n,f(m),n+f(m));
}
```
## 進階題：迴文判斷
```c
#include <stdio.h>
#include <string.h>
int main()
{
   char a[3];
   for(int i=0;i<4;i++){//讀入字元
   scanf("%c",&a[i]);
   }
   if(a[0] == a[3] &&a[1]==a[2])printf("YES\n");//判斷1跟4，2跟3是否一樣
   else printf("NO\n");
}
```
## 進階題：函數反序排列數字
```c
#include <stdio.h>
int f(int n)
{
   int p;
   int m=0;
   while(n>0)
   {
      p=n%10;
      n=n/10;
      m=p+m*10;
   }
   return m;
}
int main()
{
   int n,m;
   scanf("%d",&n);
   printf("%d\n",f(m));
}
```
## 進階題：陣列找出現次數
```c
#include <stdio.h>
int main()
{
   char a[100];//包含0
   int i,x,n,count=0;
   for( i=0;i<100;i++){
       scanf("%d",&a[i]);
       if(a[i]==0) break;}
       
   scanf("%d",&x);//找X在數列中出現的次數
   n=i;//紀錄陣列個數
   
   for(int i=0;i<n;i++){
   if(a[i]==x) count++;
   }
   
   printf("%d\n",count);
}
```
## 進階題：判斷大小
```c
#include <stdio.h>
int f(int a,int b){
 if(a<b) return-1;
 if(a==b) return 0;
 if(a>b) return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 進階題：計算一列整數的總和
```c
#include <stdio.h>
int main()
{
   int a,sum=0;
   while (a!=999)//999是終止條件
   {
      printf("Enter an integer ( 999 to end ): \n");
      scanf("%d",&a);//最後的a=999
      sum+=a;
   }
   printf("The total is: %d",sum-999);//減掉最後的a
}
```
## 基礎題：計算餘數 
```c
#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   printf("%d",a%b);
}
```
## 基礎題：整數轉換等級 
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>=90) printf("A");
   else if(n<90 && n>=80) printf("B");
   else if(n<80 && n>=70) printf("C");
   else if(n<70 && n>=60) printf("D");
   else printf("F");
}
```
## 基礎題：計程車資計算
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",(((n-1500)/250)*5)+100+5);
}
```
## 基礎題：找零錢 
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,((n%50)%10)/5,(((n%50)%10)%5)/1);
}
```
## 科星廣場
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[2000][75];
int compare(const void *p1, const void*p2){
	return strcmp((char*)p1,(char*)p2);
}

char other[2000];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
		gets(other);
	}
	
	qsort(name,n,75,compare);
	
	int ans=1;
	for(int i=0;i<n;i++){
		if(strcmp(name[i],name[i+1])==0) ans++;
		else{
			printf("%s %d\n",name[i],ans);
			ans=1;
		}
	}
}
```
## 字串排序
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[100][10];
int compare(const void *p1 ,const void *p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
	}
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}
}
```
## List of Conquests
```c
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
```
## 進階題：最大公因數gcd
```c
#include <stdio.h>
int main()
{
	int a,b,ans=1,min;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	if(a>b)min=b;
	else min=a;
	for(int i=2;i<=min;i++){
		if(a%i==0 && b%i==0)ans=i;
	}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}
```
## 進階題：字串長度
```c
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
```
## 進階題：函數判斷質數
```c
#include <iostream>
using namespace std;
int prime(int n)
{
	int i;
	for(i=2;i<n;i++){
		if(n%i==0)break;
	}
	if(i==n)return 1;
	else return 0;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
## 進階題：判斷迴文
```c
#include <stdio.h>
#include <string.h>
char a[80];
int main()
{
	int i;
	scanf("%s",&a);
	
	int len=strlen(a);
	
	for(i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i])break;
	}
	
	if(i==len/2)printf("YES");
	else printf("NO");
}
```
## 基礎題：計算餘數及列印
```c
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("The remainder is %d\n",a%b);
}
```
## 基礎題：判別正方形
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Enter two numbers:  ");
	if(a==b&&b==a)printf("It is a square ");
	else printf("It is not a square ");
}
```
## 基礎題：將一連串整數相乘
```c
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
```
## 基礎題：平年月份的天數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)printf("31");
	else if(n==2)printf("28");
	else printf("30");
}
```
## 進階題：字串中的數字個數 
```c
#include <stdio.h>
int main()
{
	int ans=0;
	char c[80];
	scanf("%s",&c);
	int i=0;
	while (c[i]!='\0'){
		if(c[i]>='0'&&c[i]<='9')ans++;
		i++;
	}
	printf("%d",ans);
}
```
## 進階題：利用自訂函式最大值max與最小值min求出兩者之差
```c
#include <iostream>
using namespace std;
#include <stdio.h>
int max(int a,int b,int c,int d)
{
	int x=a;
	if(x<b)x=b;
	if(x<c)x=c;
	if(x<d)x=d;
	return x;
}
int min(int a,int b,int c,int d)
{
	int x=a;
	if(x>b)x=b;
	if(x>c)x=c;
	if(x>d)x=d;
	return x;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
## 進階題：奇數之和 
```c
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2){
		sum+=i;
	}
	printf("%d",sum);
}
```
## 進階題：兩數間可被7整除的數 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%7==0)printf("%d ",i);
	}
}
```
## 基礎題：整數二元四則運算 
```c
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+')printf("%d",a+b);
	if(c=='-')printf("%d",a-b);
	if(c=='*')printf("%d",a*b);
	if(c=='/')printf("%d",a/b);
}
```
## 基礎題：幾日為星期幾 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n-1)%7);
}
```
## 基礎題：零錢總額 
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",50*a+5*b+1*c);
}
```
## 基礎題：兩數平方差 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a*a-b*b);
}
```
## 進階題：數字個數
```c
#include <stdio.h>
int main()
{
	int a,ans=0;
	while (scanf("%d",&a)!=EOF)//End Of File
	{
		ans++;
	}
	printf("%d",ans-1);
}
```
## 基礎題：剩餘啤酒有幾手又幾瓶
```c
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	printf("%d %d",(p-6*d)/6,(p-6*d)%6);
}
```
## 基礎題：三數最小
```c
#include <stdio.h>
int m(int a,int b,int c)
{
	int ans=a;
	if(ans>b)ans=b;
	if(ans>c)ans=c;
	return ans;
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",m(x,y,z));
}
```
## 基礎題：計算立方值
```c
#include <stdio.h>
int main()
{
	int a,i;
	for(i=0;i<6;i++){
		scanf("%d",&a);
		printf("%d\n",a*a*a);
	}
}
```
## 進階題：判斷平方數
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i*i==n)ans=i;
	}
	printf("%d",ans);
}
```
## 進階題：計算質數個數
```c
#include <stdio.h>
int main()
{
	int a,b,count=0,j;
	scanf("%d%d",&a,&b);
	for(int i=a ;i<=b ;i++ ){
		for( j=2 ;j < i ;j++ ){
			if(i%j==0)break;
		}
		if(j==i)count++;
	}
	printf("%d",count);
}
```
## 進階題：三數組合
```c
#include <stdio.h>
int main()
{
	int n[3],a=0,t;
	for(int i=0;i<3;i++){
		scanf("%d",&n[i]);
	}
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			if(n[i]<n[k]){
				t=n[i];
				n[i]=n[k];
				n[k]=t;
			}
		}
	}
	for(int i=2;i>=0;i--){
		a=a*10+n[i];
	}
	printf("%d",a+1);
}
```
## 基礎題：找千位數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);
}
```

