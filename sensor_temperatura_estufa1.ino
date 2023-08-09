
int motor_aciona = 7;
int led_vermelho= 6;
int pinBuzz = 5;
float b = 20;
float a = 0.1;
float valor_temp;
float temperatura;


void setup()
  {
 
  pinMode(A0, INPUT);
  pinMode(motor_aciona, OUTPUT);
  pinMode(led_vermelho,  OUTPUT);
  pinMode(pinBuzz, OUTPUT);
}
void loop()
{
 valor_temp = analogRead(A0);
 Serial.begin(9600);
 Serial.println(valor_temp);
 temperatura = a * valor_temp + b;
 Serial.print("Valor: ");
 Serial.println(temperatura);
 if((temperatura >= 30) and (temperatura <=50)){
    digitalWrite(motor_aciona, HIGH);
   

  
  }else if(temperatura > 50){
    digitalWrite(led_vermelho, HIGH);
   	tone(pinBuzz, 1000);
   	delay(1000);
   	noTone(pinBuzz);
   	delay(1000);
  
    
    
  }
  
 delay(1000);
}