int Red =1;
int Blue=2;
int Green=3;
void setup(){
  /*pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);*/
  SETUP();
}
void loop(){
  /*
   int j=1;
  while (j<=5)
{ digitalWrite(RED, HIGH);
    DELAY();
  digitalWrite(RED, LOW);
  DELAY();
 j++; }
  int j=1;
  while (j<=5)
{ digitalWrite(Blue, HIGH);
    DELAY();
  digitalWrite(Blue, LOW);
  DELAY();
 j++;}
 for (int j=1; j<=5,j++;)
{ digitalWrite(Green, HIGH);
    DELAY();
  digitalWrite(Green, LOW);
  DELAY();
 
}*/
  RED();
  BLUE();
  GREEN();
}
