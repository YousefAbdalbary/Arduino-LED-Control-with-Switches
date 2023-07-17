int switch1 = 8;
int switch2 = 7;
int led1 = 11;int led2 = 6; 
int led4 = 9; int led6 = 10;
int reading1 , reading2; 
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
}

void loop()
{
  reading1 = digitalRead(switch1);
  reading2 = digitalRead(switch2);
  if (reading1 ==1){ 
    
    analogWrite(led1, 255/2);
      analogWrite(led2, 255); }  
  else {
  analogWrite(led1, 0);
   analogWrite(led2, 0);
}
  if (reading2 ==1){ 
    
    analogWrite(led4,255 );
    analogWrite(led6, 255/2);  }
  else {   
  analogWrite(led4, 0);
      analogWrite(led6, 0);
  
}
  delay(250);
 
}