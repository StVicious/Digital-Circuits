void setup()
{
  pinMode(11, OUTPUT); //Red
 pinMode(12, OUTPUT);  //Green
 pinMode(13, OUTPUT);  //Blue
  
  
}


void loop()
{
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, HIGH);
  delay(100);
    
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(13, LOW);
  delay(1);
  
  delay(1);  //just in case
}
