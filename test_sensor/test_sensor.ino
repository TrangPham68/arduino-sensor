
const int led=3; // variable which stores pin number
int photoTran = A0;
int reading = 0;


void setup() 
{
//  pinMode(led, OUTPUT);  //configures pin 3 as OUTPUT
//  pinMode(photoTran,INPUT);
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
}

void loop() 
{
  byte wLeft = digitalRead(12);
  byte wRight = digitalRead(13);
  Serial.print(wLeft);
  Serial.println(wRight);
  delay(2000);
  
//   reading = analogRead(photoTran);
//   Serial.println(reading);
//  delay(100);
//  if (reading < 25)// the point at which the state of LEDs change 
//    { 
//      digitalWrite(led, HIGH);  //sets LEDs ON
//    }
//  else    {
//      digitalWrite(led,LOW);  //Sets LEDs OFF
//    }
}


