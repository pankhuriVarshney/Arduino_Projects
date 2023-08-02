 int a=2;
  int b=4;
  int c=6;
  int d=8;
  int e=10;
  int f=12; 
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
}

void loop() {
  for(int i=0;i<=500;i++)
  {
  digitalWrite(a, HIGH);
  delay(10);
  digitalWrite(b, HIGH);
  delay(10);
  digitalWrite(c, HIGH);
  delay(10);
  digitalWrite(d, HIGH);
  delay(10);
  digitalWrite(e, HIGH);
  delay(10);
  digitalWrite(f, HIGH);   
  delay(10);
  digitalWrite(a, LOW);
  delay(10);
  digitalWrite(b, LOW);
  delay(10);
  digitalWrite(c, LOW);
  delay(10);
  digitalWrite(d, LOW);
  delay(10);
  digitalWrite(e, LOW);
  delay(10);
  digitalWrite(f, LOW );
  delay(10);
}
exit(0);
}
