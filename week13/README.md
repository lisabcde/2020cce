## 正課 倒數計時
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
