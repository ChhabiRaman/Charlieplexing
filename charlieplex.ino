#define NODE_A 3
#define NODE_B 5
#define NODE_C 7

void setup() {
  pinMode(NODE_A,OUTPUT);
  pinMode(NODE_B,OUTPUT);
  pinMode(NODE_C,OUTPUT);
}

void charlieplex(int x,int y,int z)
{
  if(x<0)pinMode(NODE_A,INPUT);
  else
  {
    pinMode(NODE_A,OUTPUT);
    digitalWrite(NODE_A,x); 
  }

  if(y<0)pinMode(NODE_B,INPUT);
  else
  {
    pinMode(NODE_B,OUTPUT);
    digitalWrite(NODE_B,y); 
  }

  if(z<0)pinMode(NODE_C,INPUT);
  else
  {
    pinMode(NODE_C,OUTPUT);
    digitalWrite(NODE_C,z); 
  }
}

void loop() {
  charlieplex(HIGH,-5,LOW);
  delay(1000);
  charlieplex(LOW,-5,HIGH);
  delay(1000);
  charlieplex(LOW,HIGH,-5);
  delay(1000);
  charlieplex(HIGH,LOW,-5);
  delay(1000);
  charlieplex(-5,LOW,HIGH);
  delay(1000);
  charlieplex(-5,HIGH,LOW);
  delay(1000);
}
