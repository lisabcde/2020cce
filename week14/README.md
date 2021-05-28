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
