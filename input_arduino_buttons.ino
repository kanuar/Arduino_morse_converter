#include <Wire.h>

int Underscore = 0;
int Space = 0;
int Enter = 0;
int Dot = 0;
int UnderscoreL = 0;
int SpaceL = 0;
int EnterL = 0;
int DotL = 0;
void setup()
{
  Wire.begin();
  
}

void loop()
{
  Underscore=digitalRead(4);
  Space=digitalRead(7);
  Dot=digitalRead(2);
  Enter=digitalRead(8);
  if (Underscore!=UnderscoreL)
  {
    if (Underscore==HIGH)
    {
      
    	Wire.beginTransmission(8);
    	Wire.write(0);
    	Wire.endTransmission();
    }
    else
    {
      delay(5);
    }
    delay(5);
  }
  else if (Dot!=DotL)
  {
    if (Dot==HIGH)
    {
      Wire.beginTransmission(8);
      Wire.write(1);
	  Wire.endTransmission();
    }
    else
    {
      delay(5);
    }
    delay(5);
  }
  else if (Space!=SpaceL)
  {
    if(Space==HIGH)
    {
      Wire.beginTransmission(8);
      Wire.write(' ');
      Wire.endTransmission();
    }
    delay(5);
  }
  else if(Enter!=EnterL)
  {
    if(Enter==HIGH)
    {
      Wire.beginTransmission(8);
      Wire.write('e');
      Wire.endTransmission();
    }
    delay(5);
  }
  UnderscoreL = Underscore;
  SpaceL = Space;
  EnterL = Enter;
  DotL = Dot;
  delay(10);
}
