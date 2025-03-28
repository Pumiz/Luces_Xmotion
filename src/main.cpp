#include <Arduino.h>

#define led_azul 8
#define led_amarillo 9
#define pulsador A0

void setup() {
  Serial.begin(9600);
  pinMode(led_azul, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop() {

}

/*
PARPADEO RAPIDO

      for(int i=0;i<=4;i++){
      digitalWrite(led_amarillo, HIGH);
      delay(87);
      digitalWrite(led_amarillo, LOW);
      delay(87);
      //Serial.println("ejecuto una vez");



PARPADEO LENTO

    for(int i=0;i<=2;i++){
      digitalWrite(led_amarillo, HIGH);
      delay(250);
      digitalWrite(led_amarillo, LOW);
      delay(250);
      //Serial.println("ejecuto una vez");
    } 



PROGRESIVO SOLO AMARILLO 

  float PWM_LED = -25.5;
  float PWM_LED_OFF = 280.5;

  if(!state_push){
    Serial.println("Enciendo la secuencia");


    for(int i=0;i<=2;i++){
      for(int y=0;y<=10; y++){
        PWM_LED += 25.5;
        analogWrite(led_amarillo, PWM_LED);
        delay(50);
      }

      for(int y=0;y<=10; y++){
        PWM_LED_OFF -= 25.5;
        analogWrite(led_amarillo, PWM_LED_OFF);
        delay(50);
        Serial.println(PWM_LED_OFF);
      }

      PWM_LED = -25.5;
      PWM_LED_OFF = 280.5;
}



Doble destello
    for(int i = 0; i < 2; i++) {
      digitalWrite(led_amarillo, HIGH);
      delay(100);
      digitalWrite(led_amarillo, LOW);
      delay(100);
    }
    delay(500);



ALERTA
for(int i = 0; i < 3; i++) {
   digitalWrite(led_amarillo, HIGH);
   delay(100);
   digitalWrite(led_amarillo, LOW);
   delay(100);
}
delay(500);
digitalWrite(led_amarillo, HIGH);
delay(500);
digitalWrite(led_amarillo, LOW);
delay(500);

*/