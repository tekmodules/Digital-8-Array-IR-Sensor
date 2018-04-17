/*
 Written by : Shaifur Rahman, Sakib Ahmed
 Date : 18 April 2018
 Device(s) : Arduino UNO, TekModules Digital IR 8Array
 Code Version: 1.1 
*/
int sensorPin[] = {13,12,11,10,9,8,7,6};
void setup() {
 pinMode(sensorPin[0], INPUT);
 pinMode(sensorPin[1], INPUT);
 pinMode(sensorPin[2], INPUT);
 pinMode(sensorPin[3], INPUT);
 pinMode(sensorPin[4], INPUT);
 pinMode(sensorPin[5], INPUT);
 pinMode(sensorPin[6], INPUT);
 pinMode(sensorPin[7], INPUT);
 Serial.begin(9600);
}
void loop() {
 for (int i = 0; i < 8; i++) {
 Serial.print("Sen-");
 Serial.print( (String)(i + 1) + ": ");
 Serial.print(digitalRead(sensorPin[i]));
 Serial.print(" ");
 delay(100);
 }
 Serial.println();
}