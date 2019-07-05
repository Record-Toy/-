int T=250;
int PIN;
void dot()
{
	digitalWrite(PIN,HIGH);
	delay(T);
	digitalWrite(PIN,LOW);
	delay(T);
}

void dash()
{
	digitalWrite(PIN,HIGH);
	delay(T*4);
	digitalWrite(PIN,LOW);
	delay(T);
}

void c_space()
{
	digitalWrite(PIN,LOW);
	delay(T*3);
}

void w_space()
{
	digitalWrite(13,LOW);
	delay(T*7);
}

void setup() {
  PIN=13;
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
      {case 97:dot();dash();break;
       case 98:dash();dot();dot();dot();break;
       case 99:dash();dot();dash();dot();break;
       case 100:dash();dot();dot();break;
       case 101:dot();
       case 102:dot();dot();dash();dot();break;
       case 103:dash();dash();dot();break;
       case 104:dot();dot();dot();dot();break;
       case 105:dot();dot();break;
       case 106:dot();dash();dash();dash();break;
       case 107:dash();dot();dash();break;
       case 108:dot();dash();dot();dot();break;
       case 109:dash();dash();break;
       case 110:dash();dot();break;
       case 111:dash();dash();dash();break;
       case 112:dot();dash();dash();dot();break;
       case 113:dash();dash();dot();dash();break;
       case 114:dot();dash();dot();break;
       case 115:dot();dot();dot();break;
       case 116:dash();break;
       case 117:dot();dot();dash();break;
       case 118:dot();dot();dot();dash();break;
       case 119:dot();dash();dash();break;
       case 120:dash();dot();dot();dash();break;
       case 121:dash();dot();dash();dash();break;
       case 122:dash();dash();dot();dot();break;
       case 32:w_space();break;
      }
      c_space();
    }
  }
delay(3000);
}