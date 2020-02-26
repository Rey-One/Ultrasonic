/*******************************
 * 
 *  Name - Rohit Maurya
 *  Des - mesure the distance using ultra sonic sensor 
 *  date - 25 feb 2020
 ***********************************/
int trig=5;
int echo=4;
long time_ms=0;
int distance=0;

void setup() {
  
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
  digitalWrite(trig,HIGH);
 delayMicroseconds(2);
 digitalWrite(trig,LOW);
 time_ms=pulseIn(echo,HIGH);// measure the trevelling  time in microseconds
 //Serial.print(time_ms);
 Serial.println("TIME TAKEN : " + String(time_ms));
 distance=time_ms*0.017; // measure the distance in cm
 Serial.print("Distance:");
 Serial.println(distance);
 delay(3000);
}
