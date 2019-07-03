#include<Morse.h>
Morse m(13);
void setup() {
 Serial.begin(9600);

}

void loop() {
  String str="";
  int i,n=0,temp=0;
  char a,b,c;
  while(Serial.available()>0)
  {
    temp=1;
    str+=char(Serial.read());
    n++;
  }
  if(temp)
  {
    for(i=0;i<n;i++)
    {
      switch(str[i])
      {case 97:m.dot();m.dash();break;
       case 98:m.dash();m.dot();m.dot();m.dot();break;
       case 99:m.dash();m.dot();m.dash();m.dot();break;
       case 100:m.dash();m.dot();m.dot();break;
       case 101:m.dot();
       case 102:m.dot();m.dot();m.dash();m.dot();break;
       case 103:m.dash();m.dash();m.dot();break;
       case 104:m.dot();m.dot();m.dot();m.dot();break;
       case 105:m.dot();m.dot();break;
       case 106:m.dot();m.dash();m.dash();m.dash();break;
       case 107:m.dash();m.dot();m.dash();break;
       case 108:m.dot();m.dash();m.dot();m.dot();break;
       case 109:m.dash();m.dash();break;
       case 110:m.dash();m.dot();break;
       case 111:m.dash();m.dash();m.dash();break;
       case 112:m.dot();m.dash();m.dash();m.dot();break;
       case 113:m.dash();m.dash();m.dot();m.dash();break;
       case 114:m.dot();m.dash();m.dot();break;
       case 115:m.dot();m.dot();m.dot();break;
       case 116:m.dash();break;
       case 117:m.dot();m.dot();m.dash();break;
       case 118:m.dot();m.dot();m.dot();m.dash();break;
       case 119:m.dot();m.dash();m.dash();break;
       case 120:m.dash();m.dot();m.dot();m.dash();break;
       case 121:m.dash();m.dot();m.dash();m.dash();break;
       case 122:m.dash();m.dash();m.dot();m.dot();break;
       case 32:m.w_space();break;
      }
      m.c_space();
    }
  }
delay(3000);
}
