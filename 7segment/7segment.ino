
// the setup function runs once when you press reset or power the board
void setup() {

 int i;
 for (i=1; i<=7; i++)
 
  pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  one();
}
void one()
{
  int i;
  for(i=1; i<=7; i++)
  if(i==6)
  {
    digitalWrite(i,HIGH);
    
  }
  else
  {
    digitalWrite(i, LOW);
  }
  delay(1000);
  }
