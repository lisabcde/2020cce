## 正課 點
```c
void setup(){//只做一次設定
size(1024,400);
}
void draw(){//每秒狂做60次
if(mousePressed)background(255,255,0);
else background(250,125,25);
textSize(50);//字的大小 設50號字
text(a,100,100);//將a在100,100畫出來
}
int a=0; //外部變數
void mousePressed(){//按下去時,會呼叫這個函式
a++;
}
```
## 正課 時間
```c
void setup(){
  size(1024,400);
}
void draw(){
  background(15,162,249);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  text("Now"+ h +":"+ m +":"+ s,100,100);
}//     字串  數 字串 數 字串 數字
```
## 正課 總秒數
```c
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(15,162,249);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  text("Now"+ h +":"+ m +":"+ s,100,100);
 //     字串  數 字串 數 字串 數字
 int total = h * 60 * 60 + m * 60 + s;//總秒數
 text("總秒數:" + total,100,200);
 }
 ```
 ## 正課 倒計時
 ```c
 void setup(){
  size(1024,400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(15,162,249);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  fill(255,0,0);//填充墨水的色彩
  text("Now"+ h +":"+ m +":"+ s,100,100);//現在時間
 //     字串  數 字串 數 字串 數字
 int total = h * 60 * 60 + m * 60 + s;//現在時間的總秒數
 int total12=12*60*60+0*60+0;//目標時間的總秒數
 text("總秒數:" + total,100,200);
 int ans = total12-total;
 int hh =ans/60/60%60,mm=ans/60%60,ss=ans%60;
 text("還剩下:"+hh+":"+mm+":"+ss,100,300);
 }
 ```
 ## 進階題：求11 +22+33+…+nn。
 ```c
 #include <stdio.h>
int main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum+=i*10+i;
	}
	printf("%d",sum);
}
```
## 進階題：求兩數之最大公因數
```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
	int m,ans=1,i;
	if(a<b)m=a;
	else m=b;
	for(i=2;i<=m;i++){
		if(a%i==0 && b%i==0)ans=i;
	}
	return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
## 進階題：區間測速-超速之王
```c
#include <stdio.h>
int main()
{
	int i,a,min,index=1;
	scanf("%d",&min);
	for(i=2;i<=10;i++){
		scanf("%d",&a);
		if(min>a){
			min=a;
			index=i;
		}
	}
	int s=60*60*1.2/min;
	printf("%d %d",index,s);
}
```
## 進階題：10數排序，從大到小排好
```c
#include <stdio.h>
int main()
{
	int a[10],i,j,temp;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
```
## 基礎題：正整數平方總和
```c
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=(i*i);
	}
	printf("%d",sum);
}
```
## 進階題：兩數之間的3倍數總和
```c
#include <stdio.h>
int main()
{
	int a,b,i,sum=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		if(i%3==0)
		sum+=i;
	}
	printf("%d",sum);
}
```
## 基礎題：判斷座標的象限
```c
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0){
		if(y>0)printf("1\n");
		else if(y<0)printf("4\n");
	}
	else if(x<0){
		if(y>0)printf("2\n");
		else if(y<0)printf("3\n");
	}
}
```
## 基礎題：輸入n (n>0)， 求n之所有因數和
```c
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		sum+=i;
	}
	printf("%d",sum);
}
```
