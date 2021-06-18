## 正課 HELLO
```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){//每秒60次
  background(0);
  text("hello",100,100);
  text(   line,100,150);
}
```
## 正課 Q&A
```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("You:"+line,100,150);
}
void mousePressed(){
  line =line +"a";
}
```
## 正課 2-1
```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  if(key>='a'&&key<='z')line=line+key;//小寫
  if(key>='A'&&key<='Z')line=line+key;//大寫
}
```
## 正課 2-2
```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  int len = line.length();
  if(key>='a'&&key<='z')line=line+key;//小寫
  if(key>='A'&&key<='Z')line=line+key;//大寫
  if(key == BACKSPACE)line = line.substring(0,len-1);
}
```
## 正課 backspace
```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  int len = line.length();
  if(key>='a'&&key<='z')line=line+key;//小寫
  if(key>='A'&&key<='Z')line=line+key;//大寫
  if(key == BACKSPACE&& len>0)line = line.substring(0,len-1);
}
```
