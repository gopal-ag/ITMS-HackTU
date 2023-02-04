#define R1 2
#define G1 3
#define R2 4
#define G2 5
#define R3 6
#define G3 7
#define R4 8
#define G4 9
#define IR 13
#define del 5000

int ini;
int tim;
void setup()
{
    pinMode(R1, OUTPUT);
    pinMode(G1, OUTPUT);
    pinMode(R2, OUTPUT);
    pinMode(G2, OUTPUT);
    pinMode(R3, OUTPUT);
    pinMode(G3, OUTPUT);
    pinMode(R4, OUTPUT);
    pinMode(G4, OUTPUT);
  //pinMode(trig, OUTPUT);
  //pinMode(ech, INPUT);

  Serial.begin(9600);
}

char ser = 0;

void loop()
{
  ini=130;
  int dist;
  long time;
 
   
  while(Serial.available())
  {
    ser=Serial.read();
  switch(ser)
  {
    case '1':
    digitalWrite(G1, HIGH);
    digitalWrite(R2,HIGH);
    digitalWrite(R3,HIGH);
    digitalWrite(R4,HIGH);
    //digitalWrite(trig, LOW);
   delay(100);
   //digitalWrite(trig, HIGH);
   delay(100);
   //digitalWrite(trig, LOW);
    break;

    case '2':
    digitalWrite(G2, HIGH);
    digitalWrite(R1,HIGH);
    digitalWrite(R3,HIGH);
    digitalWrite(R4,HIGH);
    //digitalWrite(trig, LOW);
   delay(100);
//   digitalWrite(trig, HIGH);
   delay(100);
   //digitalWrite(trig, LOW);
    break;

    case '3':
    digitalWrite(G3, HIGH);
    digitalWrite(R2,HIGH);
    digitalWrite(R1,HIGH);
    digitalWrite(R4,HIGH);
    //digitalWrite(trig, LOW);
   delay(100);
   //digitalWrite(trig, HIGH);
   delay(100);
   //digitalWrite(trig, LOW);
    break;

    case '4':
    digitalWrite(G4, HIGH);
    digitalWrite(R2,HIGH);
    digitalWrite(R3,HIGH);
    digitalWrite(R1,HIGH);
    //digitalWrite(trig, LOW);
   delay(100);
   //digitalWrite(trig, HIGH);
   delay(100);
   //digitalWrite(trig, LOW);
    break;
    }  
  }
}
