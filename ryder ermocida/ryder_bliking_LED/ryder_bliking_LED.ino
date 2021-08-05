int led = 0;

int led1 = 1;

void setup() {
  // put your setup code here, to run once:
 pinMode(led, OUTPUT);
 pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led, HIGH);
 digitalWrite(led1, LOW);
 delay(1000);
 
 digitalWrite(led, LOW);
digitalWrite(led1, HIGH);
delay(1000);

}
