int LEDpin[] = {13,12,9,7,5,2}; //pins in use
int delayTime = 100;

void setup()
{
  for (int i = 0;i < 6;i++)
  {
    pinMode(LEDpin[i], OUTPUT); //initiate pins
  }
}

void loop()
{
  for ( int i = 0;i < 6;i++ )
  {
    delay(delayTime);
    digitalWrite(LEDpin[i],HIGH); //on
    delay(delayTime);
    if ( i >= 2 )
    {
      digitalWrite(LEDpin[i-2],LOW); //off
      delay(delayTime);
    }
  }
  for ( int j = 6;j > 0;j--)
  {
    digitalWrite(LEDpin[j],HIGH); //on
    delay(delayTime);
    if ( j <= 4)
    {
      digitalWrite(LEDpin[j+1],LOW); //off
      delay(delayTime);
    }
  }
}