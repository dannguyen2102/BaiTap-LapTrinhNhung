int ct=0;
void setup ()
{
  pinMode (2, INPUT);
  pinMode (13, OUTPUT);
}

void loop ()
{
  ct=digitalRead(2);
  if (ct==HIGH)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
