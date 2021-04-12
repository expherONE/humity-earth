
int sensorPin = A0;   
int led = 4;   
int sensorValue = 0; 
int motor =5;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(sensorPin);
 

  Serial.println(sensorValue);
  if(sensorValue >= 500){
    digitalWrite(motor, HIGH);
    digitalWrite(led,LOW);
  }else{
    digitalWrite(motor,LOW);
    digitalWrite(led,HIGH);
  }
  delay(300);
}
