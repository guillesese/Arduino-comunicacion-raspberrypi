int led = 13; 
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char c = Serial.read();
    if (c == 'H'){
      digitalWrite(led, HIGH);
    }else if( c== 'L'){
      digitalWrite(led, LOW);
    }
  }
}
