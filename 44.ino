  int yellow=3;
  int orange=5;
  int blue=6; 
  int white=9;
  int red=10;
  int green=11;
  int reading1 =0;
  int reading2 =0;
  int switch1 =4;
  int switch2 =7;
  
void setup()
{
   pinMode(3,1);
   pinMode(5,1);
   pinMode(6,1);
   pinMode(9,1);
   pinMode(10,1);
   pinMode(11,1);
   pinMode(4,0);
   pinMode(7,0);
}

void loop()
{
 if (digitalRead(switch1) == HIGH)
 {
 analogWrite(3,0);
 analogWrite(5,0);
 analogWrite(6,0);
   delay(1000);
 analogWrite(3,63);
 analogWrite(5,63);
 analogWrite(6,63);
   delay(1000);
 analogWrite(3,127);
 analogWrite(5,127);
 analogWrite(6,127);
   delay(1000);
 analogWrite(3,191);
 analogWrite(5,191);
 analogWrite(6,191);
   delay(1000);
 analogWrite(3,255);
 analogWrite(5,255);
 analogWrite(6,255); 
  
  }
 else
  { 
 analogWrite(3,0);
 analogWrite(5,0);
 analogWrite(6,0); 
 
 }
  if (digitalRead(switch2) == HIGH)
 {
 analogWrite(9,0);
 analogWrite(10,0);
 analogWrite(11,0);
   delay(1000);
 analogWrite(9,63);
 analogWrite(10,63);
 analogWrite(11,63);
   delay(1000);
 analogWrite(9,127);
 analogWrite(11,127);
 analogWrite(11,127);
   delay(1000);
 analogWrite(9,191);
 analogWrite(10,191);
 analogWrite(11,191);
   delay(1000);
 analogWrite(9,255);
 analogWrite(10,255);
 analogWrite(11,255); 
}
  else
 {
    for (int i=9; i<=11; i++)
     analogWrite(i,0);
 }
 }