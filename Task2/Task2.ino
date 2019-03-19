const int hallPin = 12;     
int enable2 = 9;
int enable1=8;
int in3 = 10;
int in4 = 11;
int in1 = 4;
int in2 = 5;
int hallState = 0;      

void setup() {
  pinMode(hallPin, INPUT);  
  pinMode(enable1, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);   
}
void loop(){
  hallState = digitalRead(hallPin);

  if (hallState == LOW) {     
    analogWrite(enable1, 255); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2,LOW);    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    analogWrite(enable1,0 );
    digitalWrite(in1, HIGH);
    digitalWrite(in2,LOW);
  }
}
