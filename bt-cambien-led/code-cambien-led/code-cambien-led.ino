void setup ()
{
  Serial.begin (96000);
}

void loop()
{
  int giatri = analogRead (A0);
    int nhietdo=map (giatri,20,358,-40,125);
    if (nhietdo>37) digitalWrite (9, HIGH);
    else digitalWrite (9, LOW);
}
