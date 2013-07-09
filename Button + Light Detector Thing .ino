void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);  // start serial communication with the Arduino
  
}

void loop()
{
  int lowestVal = 400;
  int HighestVal = 800;
  int lowFreq = 50;
  int highFreq = 200;
  int sensorValue = analogRead(A0);
  //tone(9, 392, 1000);  // G
  Serial.println(sensorValue);
  sensorValue = map(sensorValue, lowestVal, HighestVal, lowFreq, highFreq);  
  tone(9, sensorValue, 100);
  delay(1);
}
