## 正課 複習倒數計時
```c
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖,每秒60次
  background(41,199,207);
  int s = second();//秒鐘
  text(s,100,100);
}
```
## 正課 倒數計時
```c
//秒數s:0,1,2...59
//      59,58,57...0(幫手)59-s
//==========================
//倒數:9,8,7...0
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,199,207);//隨便猜的色彩
  int s = second();//秒鐘
  //text(59-s,100,100);
  text(9-s%10,100,100);
}
//  原:0,1,2,3,4,5,6,7,8,9
//倒數:9,8,7,6,5,4,3,2,1,0
```
## 正課 tada
```c
//發出聲音,有點難,要用外掛Procedding的Sound
//這裡叫PDE:Processing Developing Enviroment
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
import processing.sound.*;
SoundFile player;//SoundFile是型狀,player變名
//int     a;
//char    c;
//float   f;
//tada.mp3檔,也可以拉進來這裡
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
```
## 正課 倒數完播音樂
```c
import processing.sound.*;

//從第2步的程式開始增加!!!
import processing.sound.*;//Step3
SoundFile player;//step3
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this,"tada.mp3");
}//Step03
void draw(){
  background(51,114,191);
  int s = second();
  text(9-s%10,100,100);
  if(9-s%10==0)player.play();//Step03
}//0秒時,if()會進去60次,吵死了!!
```
## 正課 播bell
```c
//Step03出發,做Step05
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");
}//Step03
void draw(){
  background(51,114,191);
}
void mousePressed(){
  if(player.isPlaying()){
    player.stop();
  }else{
    players.play();
  }
}
```
## 正課 改p5.js
```c
function setup() {
    createCanvas(400,200);
  textSize(40);
}


function draw() {
    background(41,199,207);
  let s = second();
  text(s,100,100);
}
```
## 進階題：億萬富翁
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0 && i!=0)printf(",");
		printf("%c",a[i]);
	}
}
```
## 進階題：秒數換算
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int sec=n%60;
	int min=n/60%60;
	int hour=n/(60*60);
	printf("%02d:%02d:%02d",hour,min,sec);
}
```
## 基礎題：水杯接水
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%b==0){
		printf("%d",a/b);
	}
	else printf("%d",a/b+1);
}
```
## 基礎題：平面兩座標的面積
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("%d",abs(x2-x1)*abs(y2-y1));
}
```
## 基礎題：整數向量相加
```c
#include <stdio.h>
int main()
{
	int n,a[10],b[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
}
```
