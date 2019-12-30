int x, y, z;


void setup() {
  // put your setup code here, to run once:
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 x = analogRead(A5);
 delay(1);
 y = analogRead(A6);
 delay(1);
 z = analogRead(A7);
 delay(1);

 
 Serial.print("  ");
 Serial.print(x/1023);
 Serial.print("     ");
 Serial.print(y/1023);
 Serial.print("     ");
 Serial.print(z/1023);
 Serial.println("  ");
 delay(250);
}
