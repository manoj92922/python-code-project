// Made by Parth Shah, Tool Kit
//For video, visit: https://youtu.be/mnNdOPMZdjQ

int s1 = 0;
int s2 = 0;

void setup()
{
  pinMode(2,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int state = digitalRead(2);

  if(state == HIGH)
    s1 = 1;
  if(state == LOW)
    s1 == 0;

  if((s1 != s2)&&(s1 == 1))
    Serial.print("Yes");
  if((s1 != s2)&&(s1 == 0))
    Serial.print("No");
  
  int state2 = digitalRead(2);

  if(state2 == HIGH)
    s2 = 1;
  if(state2 == LOW)
    s2 == 0;

  if((s2 != s1)&&(s2 == 1))
    Serial.print("Yes");
  if((s2 != s1)&&(s2 == 0))
    Serial.print("No");
}
