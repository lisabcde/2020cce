## 正課 畫圓
```c
void setup(){//設定,只做一次
   size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);
  ellipse(50,50,80,80);
}//畫圓   圓心  寬 高
```
## 正課 圓
```c
void setup(){//設定,只做一次
   size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RBG三色
  fill(255);//白
  ellipse(100,100,180,180);
 //畫圓   圓心  寬 高
  fill(255,0,0);//紅
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
```
## 正課 點
```c
void setup(){
   size(400,200);
   fill(255,0,0);
   textSize(40);
}
int degree=0;
void draw(){
  background(57,255,127);
  float stop=radians(degree);//弧度 徑度
  text(degree,200,100);//360度,航海
  text(stop,200,150);
  arc(100,100,180,180,0,stop);
  if(mousePressed)degree++;
}
```
## 正課 shift
```c
void setup(){
   size(400,200);
   fill(255,0,0);
   textSize(40);
}
float shift=0;
void draw(){
  background(57,255,127);
  //float start=radians(90+mouseX);
  //float stop=radians(180+mouseX);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  shift+=1;
}
```
## 正課 轉動
```c
void setup(){
   size(400,200);
   fill(255,0,0);
   textSize(40);
}
float shift=0,v=10;//一開始速度10
void draw(){
  background(57,255,127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.0001){//還有速度時,就轉動
    shift+=v;//轉動的速度
    v=v*0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
## 正課 隨機時間
```c
void setup(){
   size(400,200);
   fill(255,0,0);
   textSize(40);
}
float shift=0,v=10;//一開始速度10
void mousePressed(){
  //v=random(10);//0...10.0
  v=random(10)+5;//0...15.0
}
void draw(){
  background(57,255,127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.01){//還有速度時,就轉動
    shift+=v;//轉動的速度
    v=v*0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
## 正課 轉盤
```c
void setup(){
   size(400,200);
   fill(255,0,0);
   textSize(40);
}
float shift=0,v=0;//一開始速度0
void mousePressed(){
  //v=random(10);//0...10.0
  v=random(10)+5;//0...15.0
}
void draw(){
  background(57,255,127);
  for(int i=0;i<24;i++){
  if(i%3==0)fill(0);
  if(i%3==1)fill(255);
  if(i%3==2)fill(200,180,0);
  if(i==0)fill(255,100,0);
  float start=radians(0+shift+i*360/24);
  float stop=radians(360/24+shift+i*360/24);
  arc(100,100,180,180,start,stop);
  }
  if(v>0.01){//還有速度時,就轉動
    shift+=v;//轉動的速度
    v=v*0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
