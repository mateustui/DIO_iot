#define motor 4
#define led 5
#define buzzer 6
int sensorPin = A0;

void setup()
{
  pinMode(motor, OUTPUT);
  digitalWrite(motor,LOW);
Serial.begin(9600);
}
void loop()
{
//leitura dos valores
int reading = analogRead(sensorPin);
//formula
float voltage = reading * 4.68;
voltage = voltage/1024.0;
float temperatureC = (voltage - 0.5) * 100;
// Apresenta temperatura
Serial.print(temperatureC);
Serial.println(" Graus Celcius");
  if(temperatureC>=30)
  {
    digitalWrite(motor,HIGH);
  }
  else{
  digitalWrite(motor,LOW);
  }
  if(temperatureC>=50)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
  }
  
  
delay(1000);
} 
