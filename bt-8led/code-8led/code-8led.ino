#define _clock 10
#define _latch 8
#define _data 9

void setup() 
{
  pinMode(_latch,OUTPUT);
  pinMode(_clock,OUTPUT);
  pinMode(_data,OUTPUT);

}

void loop() 
{
  for(int i=0; i<256;i++)
  {
    digitalWrite(_latch,LOW);
    shiftOut(_data,_clock,MSBFIRST,i);
    digitalWrite(_latch,HIGH);
    delay(500);
  }

}
