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
