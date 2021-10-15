int  sensorValue  = 0;

void setup ()
{
  //pinMode (A0,INPUT);
    pinMode (11,OUTPUT);
    Serial.begin(9600);
}

void loop ()
{
   sensorValue = analogRead(A0);
  Serial.println( sensorValue );
  int photoresistor = map (sensorValue,0,1023,0,255);
  analogWrite (11,photoresistor);
}
