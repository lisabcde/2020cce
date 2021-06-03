## 正課 取亂數
```c
void setup(){//設定 只做一次
   size(300,200);
   float ans = random(60);//亂數取<60的數
   textSize(30);
   text(ans,0,30);
}
```
## 正課 按下去亂數
```c
//Q1:數字有小數點,不好!!!A:整數無條件捨去
//Q2:沒有互動A:用mousePressed互動!
void setup(){
   size(300,200);
   textSize(30);
}
int ans=0;
void draw(){//畫圖,每秒60次 60fps
  background(#2C9CF0);
  //int ans=(int)random(60);//強制轉型casting
  text(ans,30,30);//跳太快了
}
void mousePressed(){//mouse按下去,才做亂數
  ans=(int)random(60);
}
```
## 正課 亂數取牌
```c
//int a[]={1,2,3,4,5,6,7,8,9,10};//C,C++
int []a={1,2,3,4,5,6,7,8,9,10};//Java
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<10;i++){
    text(a[i],i*40,100);
  }
}
void mousePressed(){
  int i1=(int)random(10);
  int i2=(int)random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}//交換,行數太擠,所以塞成一行,中間是分號
```
## 正課 大樂透
```c
//大樂透 抽獎時,會掉下球,49球,挑6球
//int []a={1,2,3,4,5,6,7,8,9,10...寫49很累}
int []a= new int [49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++)a[i]=i+1;//人類:1
}                    //電腦
void draw(){
  background(#2C9CF0);
  for(int i=0;i<6;i++){//49只秀6個數
    text(a[i],i*50,100);
  }//大樂透 抽獎時,會掉下球,49球,挑6球
}
void mousePressed(){
  for(int i=0;i<10000;i++){
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
```
## 正課 大樂透慢慢丟
```c
//大樂透 抽獎時,會掉下球,49球,挑6球
//int []a={1,2,3,4,5,6,7,8,9,10...寫49很累}
int []a= new int [49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);       //電腦:0
  for(int i=0;i<49;i++)a[i]=i+1;//人類:1 丟入號碼
  for(int i=0;i<10000;i++){//大作弊,抽獎前排好
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){//49只秀6個數
   fill(255);ellipse(50+i*50,100,40,40);
   textAlign(CENTER,CENTER);//文字對齊:中,中
   fill(0); text(a[i],50+i*50,100);
  }//大樂透 抽獎時,會掉下球,49球,挑6球
}
void mousePressed(){
  N++;//其實數字早就決定了!!!我們只是慢慢印出來,讓人以為你是慢慢抽
}
```
## 進階題：奇數反流
```c
#include <stdio.h>
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		if(a[i]%2==1)printf("%d ",a[i]);
	}
}
```
## 基礎題：大位王
```c
#include <stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c<0)c=-c;
	while((c/10)>0){
		c/=10;
	}
	printf("%d\n",c);
}
```
## 基礎題：輸入西元y年，判斷該y年是否為閏年	
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0 && n%100!=0){
		printf("%d is a leap year.\n",n);
	}
	else printf("%d is not a leap year.\n",n);
}
```
## 基礎題：把數字倒著印出來
```c
#include <stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
```
## 基礎題：區間測速
```c
#include <stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	
	int s=60*60*1.2/a;
	printf("%d",s);
}
```
