int IRSensor = 8; 
int R = 9; 
int G = 7;

void setup()

{

  Serial.begin(9600); 

  Serial.println("Serial Working"); 

  pinMode(IRSensor, INPUT); 

  pinMode(R, OUTPUT); 
  pinMode(G, OUTPUT); 

}

 

void loop()

{

  int sensorStatus = digitalRead(IRSensor); 
  if (sensorStatus == 1) 

  {

    digitalWrite(G, HIGH); 
    digitalWrite(R, LOW); 
    Serial.println("Road Free"); 

  }

  else

  {

    digitalWrite(R, HIGH); 
    digitalWrite(G, LOW); 
    Serial.println("Motion Detected!"); 

  }

}
