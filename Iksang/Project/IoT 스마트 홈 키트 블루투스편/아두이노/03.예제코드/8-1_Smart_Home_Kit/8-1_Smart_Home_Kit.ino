
#include <SoftwareSerial.h>                   
#define BT_RXD 5                              
#define BT_TXD 4                              
SoftwareSerial bluetooth(BT_RXD, BT_TXD);     


#include <Wire.h>                             
#include <LiquidCrystal_I2C.h>                
LiquidCrystal_I2C lcd(0x27, 16, 2);           

#include <Adafruit_NeoPixel.h>                
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(3, 6, NEO_GRB); 
int R_Val, G_Val, B_Val = 0;                  


#include "DHT.h"
#define DHTPIN 8                             
#define DHTTYPE DHT11                        
DHT dht(DHTPIN, DHTTYPE);                    
int fan = 11;                                
int fan_speed = 0;                           
int stack = 0;                               

#include <Servo.h>                           
Servo servo;                                 
int servo_pin = 13;                           
int init_angle = 180;                         
int angle = init_angle;                       
int control_num = 0;                          


int piezo = 7;                                
int tones[] = {261, 523};                     
int IRPin = 10;                               
int Caps = 0;                                 

void setup() {
  Serial.begin(9600);                         
  bluetooth.begin(9600);                      
  lcd.init();                                 
  lcd.backlight();                            

  
  RGB_LED.begin();                            
  RGB_LED.setBrightness(100);                 
  RGB_LED.show();                             


  dht.begin();                                
  pinMode(fan, OUTPUT);                       

 
  servo.attach(servo_pin);                    


  pinMode(piezo, OUTPUT);                     
  pinMode(IRPin, INPUT);                      
}

void loop() {
  Serial_CON();                               
  Bluetooths_CON();                         
  Smart_light(R_Val, G_Val, B_Val);         
  Smart_Air(fan_speed);                     
  angle = Smart_Door(angle);                
  if (Caps == 1) {                          
    Smart_Alarm();                          
  }
  Serial.println("#-------#");
}

void Bluetooths_CON() {
  if (bluetooth.available()) {              
    if (bluetooth.find("R")) {              
      R_Val = bluetooth.parseInt();        
      Serial.print("R"); Serial.print(R_Val);
    }
    if (bluetooth.find("G")) {               
      G_Val = bluetooth.parseInt();          
      Serial.print("G"); Serial.print(G_Val);
    }
    if (bluetooth.find("B")) {               
      B_Val = bluetooth.parseInt();          
      Serial.print("B"); Serial.print(B_Val);
    }
    if (bluetooth.find("F")) {               
      fan_speed = bluetooth.parseInt();      
      Serial.print("F"); Serial.print(fan_speed);
    }
    if (bluetooth.find("D")) {               
      angle = bluetooth.parseInt();          
      control_num = 1;
      Serial.print("D"); Serial.print(angle);
    }
    if (bluetooth.find("CapsON")) {          
      Serial.print("CapsON");
      angle = init_angle;
      fan_speed = 0;
      R_Val = 0;
      G_Val = 0;
      B_Val = 0;
      Caps = 1;
    }
  }
}
void Serial_CON() {
  if (Serial.available()) {                
    if (Serial.find("R")) {                
      R_Val = Serial.parseInt();           
      Serial.print("R"); Serial.print(R_Val);
    }
    if (Serial.find("G")) {                
      G_Val = Serial.parseInt();           
      Serial.print("G"); Serial.print(G_Val);
    }
    if (Serial.find("B")) {                
      B_Val = Serial.parseInt();           
      Serial.print("B"); Serial.print(B_Val);
    }
    if (Serial.find("F")) {                
      fan_speed = Serial.parseInt();       
      Serial.print("F"); Serial.print(fan_speed);
    }
    if (Serial.find("D")) {                
      angle = Serial.parseInt();           
      control_num = 1;
      Serial.print("D"); Serial.println(angle);
    }
    if (Serial.find("CapsON")) {           
      Serial.println("CapsON");
      angle = init_angle;
      fan_speed = 0;
      R_Val = 0;
      G_Val = 0;
      B_Val = 0;
      Caps = 1;
    }
  }
}

void Smart_light(int R, int G, int B) {    
  float LED_Color = RGB_LED.Color(R, G, B);
  for (int i = 0; i < 3 ; i++) {
    RGB_LED.setPixelColor(i, LED_Color);   
    RGB_LED.show();
    delay(10);
  }
  Serial.print("R: "); Serial.print(R_Val);
  Serial.print(", G: "); Serial.print(G_Val);
  Serial.print(", B: "); Serial.println(B_Val);
}



void Smart_Air(int fan_speeds) {           
  float hum = dht.readHumidity();          
  float temp = dht.readTemperature();      

  float discomfort_index = ((9 * temp) / 5) - ((0.55 * (1 - (hum / 100))) * (((9 * temp) / 5) - 26)) + 32; //불쾌지수 계산식

  Serial.print("temp : "); Serial.print((int)temp); Serial.print(" *C, ");
  Serial.print("hum : "); Serial.print((int)hum); Serial.print(" %, ");
  Serial.print("discomfort_index : "); Serial.println((int)discomfort_index);

  if(stack == 10){
    char num1 = String((int)temp).charAt(0);
    char num2 = String((int)temp).charAt(1);
    char text[3] = {num1, num2, 13};
    stack = 0;
    bluetooth.write(text);
  }
  
  if (angle == init_angle) {
    lcd.setCursor(0, 0);                                           
    lcd.print("T : "); lcd.print((int)temp); lcd.print("C, ");     
    lcd.print("H : "); lcd.print((int)hum); lcd.print("%");        
    lcd.setCursor(0, 1);                                           
    lcd.print("Discomfort : "); lcd.print((int)discomfort_index);  
  }
  if ((int)discomfort_index > 80) {           
    analogWrite(fan, 255);                    
    Smart_light(255, 000, 000);               
  }
  else {
    analogWrite(fan, fan_speeds);              
  }
  stack++;
}


int Smart_Door(int angles) {
  if (angles != init_angle) {                     
    control_num++;                            
    lcd.setCursor(0, 0);
    lcd.print("Door Open Count ");
    lcd.setCursor(0, 1);
    lcd.print("         = "); lcd.print(control_num); lcd.print("ms ");

    if (control_num == 30) {                   
      control_num = 0;                        
      angles = init_angle;                    
    }
  }
  else {                                      
    control_num = 0;                        
    angles = init_angle;                    
  }
  Serial.print("angle : "); Serial.print(angles);
  Serial.print(", control : "); Serial.println(control_num);
  servo.write(angles);                      
  delay(100);

  return angles;                            
}



void Smart_Alarm() {
  while (1) {
    Serial.println("경비 시스템 작동");
    lcd.setCursor(0, 0); lcd.print("Security system ");
    lcd.setCursor(0, 1); lcd.print(" IRsenser off   ");

    Smart_light(000, 000, 000);             
    if (digitalRead(IRPin) == LOW) {        
      Serial.println("경고 경고 침입자 발생!");
      lcd.setCursor(0, 0); lcd.print("  !!emergency!! ");
      lcd.setCursor(0, 1); lcd.print(" IRsenser on    ");

      for (int i = 0; i < 2; i++) {         
        tone(piezo, tones[i]);              
        Smart_light(000, 000, 255);         
        delay(600);                         
        Smart_light(255, 000, 000);         
        delay(600);                         
      }
      noTone(piezo);                        
    }
    if (bluetooth.available()) {            
      if (bluetooth.find("CapsOFF")) {      
        Smart_light(000, 000, 000);         
        Caps = 0;
        break;                              
      }
    }
    if (Serial.available()) {              
      if (Serial.find("CapsOFF")) {        
        Smart_light(000, 000, 000);       
        Caps = 0;
        break;                            
      }
    }
    delay(10);
  }
}
