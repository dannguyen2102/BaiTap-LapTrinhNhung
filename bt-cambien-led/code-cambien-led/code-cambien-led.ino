void setup ()
{
  pinMode(9,OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  int giatri = analogRead (A0);
    int t =map (giatri,20,350,-40,125);
     Serial.println(t);
    if (t>37) digitalWrite (9, HIGH);
    else digitalWrite (9, LOW);
}
