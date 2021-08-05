
int firstLED = 0;
int lastLED = 4;

void setup() {
  // put your setup code here, to run once:
  int count = firstLED;
  while(count <= lastLED) {
    pinMode(count, OUTPUT);
    count += 1;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int count = firstLED;
  while(count <= lastLED) {
    digitalWrite(count, HIGH);
    delay(500);

    digitalWrite(count, LOW);
    delay(500);

    if(count <= lastLED) {
    count += 1;
    } else {
      count -= 1;
    }
  }
/*
  while(count >= firstLED) {

    digitalWrite(count, LOW);
    delay(500);

    digitalWrite(count, HIGH);
    delay(500);

    count -= 1;
  }*/
  
}
