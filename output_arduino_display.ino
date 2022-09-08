#include <LiquidCrystal.h>

#include <Wire.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String op="";
String w1="";
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Wire.begin(8);             
  Wire.onReceive(receiveEvent); 
  lcd.begin(16, 2);
  Serial.begin(9600);          
}
void loop()
{
  delay(10);
}
void receiveEvent(int howMany) {
  while (1 < Wire.available()) { 
    char c = Wire.read();    
  }
  int x = Wire.read();    
  if (x==1)
  {
    w1= w1+".";
  }
  else if (x==0)
  {
    w1=w1+ "-";
  }
  else if (x==32)
  {
    op+=Process(w1);
    w1="";
  }
  else if (x==101)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.print(op);
    lcd.setCursor(0,0);
    lcd.print(op);
    delay(100000);
    lcd.clear();
  }
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  
}


String Process(String k)
{
  
  String final_output="";
  if (k==".-")
  {
    final_output+="a";
  }
  else if (k=="-...")
  {
    final_output+="b";
  }
  else if (k=="-.-.")
  {
    final_output+="c";
  }
  else if (k=="-..")
  {
    final_output+="d";
  }
  else if (k==".")
  {
    final_output+="e";
  }
  else if (k=="..-.")
  {
    final_output+="f";
  }
  else if (k=="--.")
  {
    final_output+="g";
  }
  else if (k=="....")
  {
    final_output+="h";
  }
  else if (k=="..")
  {
    final_output+="i";
  }
  else if (k==".---")
  {
    final_output+="j";
  }
  else if (k=="-.-")
  {
    final_output+="k";
  }
  else if (k==".-..")
  {
    final_output+="l";
  }
  else if (k=="--")
  {
    final_output+="m";
  }
  else if (k=="-.")
  {
    final_output+="n";
  }
  else if (k=="---")
  {
    final_output+="o";
  }
  else if (k==".--.")
  {
    final_output+="p";
  }
  else if (k=="--.-")
  {
    final_output+="q";
  }
  else if (k==".-.")
  {
    final_output+="r";
  }
  else if (k=="...")
  {
    final_output+="s";
  }
  else if (k=="-")
  {
    final_output+="t";
  }
  else if (k=="..-")
  {
    final_output+="u";
  }
  else if (k=="...-")
  {
    final_output+="t";
  }
  else if (k==".--")
  {
    final_output+="w";
  }
  else if (k=="-..-")
  {
    final_output+="x";
  }
  else if (k=="-.--")
  {
    final_output+="y";
  }
  else if (k=="--..")
  {
    final_output+="z";
  }
  else if (k==".-.-.-")
  {
    final_output+=".";
  }
  else if (k=="..--..")
  {
    final_output+="?";
  }
  else if (k=="--..--")
  {
    final_output+=":";
  }
  else if (k==".----")
  {
    final_output+="1";
  }
  else if (k=="..---")
  {
    final_output+="2";
  }
  else if (k=="...--")
  {
    final_output+="3";
  }
  else if (k=="....-")
  {
    final_output+="4";
  }
  else if (k==".....")
  {
    final_output+="5";
  }
  else if (k==".----")
  {
    final_output+="6";
  }
  else if (k=="--...")
  {
    final_output+="7";
  }
  else if (k=="---..")
  {
    final_output+="8";
  }
  else if (k=="----.")
  {
    final_output+="9";
  }
  else if (k=="-----")
  {
    final_output+="0";
  }
  
  
  return final_output;
}
