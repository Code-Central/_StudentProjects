#define motor_PWM 9

#define motor_Clockwise 10

#define motor_Counterclockwise 11



void setup(){

// Enable Pin for motor 1

// Control pin 1 for motor 1

// Control pin 2 for motor 1

pinMode(motor_PWM,OUTPUT);

pinMode(motor_Clockwise, OUTPUT);

pinMode(motor_Counterclockwise, OUTPUT);

}



void loop(){

analogWrite(motor_PWM, 255);// Speed of Motor (0-255)

digitalWrite(motor_Clockwise, LOW );//low AND high to control

digitalWrite(motor_Counterclockwise, HIGH);// ...directionof motor

delay(4000);

digitalWrite(motor_PWM, LOW); // turn off motor with PWM

delay(200);

}
