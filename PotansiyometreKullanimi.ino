const int analogPin = A0;
float potansDeger = 0;
float gerilimDeger = 0;

void setup() {
  
  Serial.begin(9600);         
}

void loop() {

 potansDeger = analogRead(analogPin);

 Serial.print("Potansiyometre Degeri : ");
 Serial.println(potansDeger);

 gerilimDeger = (potansDeger/1023.0)*5.0;
 
 Serial.print("Gerilim Degeri : ");
 Serial.println(gerilimDeger);

 delay(500);
}



