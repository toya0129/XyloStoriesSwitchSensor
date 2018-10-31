// Xylophine Switch
#define C 13
#define D 12
#define E 11
#define F 10
#define G 9
#define A 8
#define B 7
#define C2 6

// Switch State
boolean Cstate = false;
boolean Dstate = false;
boolean EState = false;
boolean FState = false;
boolean GState = false;
boolean AState = false;
boolean BState = false;
boolean C2state = false;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(119600);

  PinSet();

}

void loop() {
  // put your main code here, to run repeatedly:
  SensorRead();
  SendData();

}

void PinSet(){
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  pinMode(7,INPUT);
  pinMode(6,INPUT);
}

void SensorRead(){
  Cstate = digitalRead(13);
  Dstate = digitalRead(12);
  Estate = digitalRead(11);
  Fstate = digitalRead(10);
  Gstate = digitalRead(9);
  Astate = digitalRead(8);
  Bstate = digitalRead(7);
  C2state = digitalRead(6);
}

void SendData(){
  Serial.print(Cstate + "¥t");
  Serial.print(Dstate + "¥t");
  Serial.print(Estate + "¥t");
  Serial.print(Fstate + "¥t");
  Serial.print(Gstate + "¥t");
  Serial.print(Astate + "¥t");
  Serial.print(Bstate + "¥t");
  Serial.print(C2state + "¥t");
  Serial.print("end");
  Serial.println("");
}
