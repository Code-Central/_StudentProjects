#define motor_PWM 9

#define motor-Clockwise 10

#difine motor_Counterclockwise 11



void setup(){

// Enable Pin for motor 1

// Control pin 1 for motor 1

// Control pin 2 for motor 1

pinMode(motor_PWM,OUTPUT);

pinMode(motor_Clockwise, OUTPUT);

PINmODE(MOTOR_cOUNTERCLOCKWISE, output);

}



void loop(){

analogWrite(motor_PWM, 255);// Speed of Motor (0-255)

digitalWrite(motor_Clockwise, LOW );//low AND high to 

control

digitalWrite(motor_Counterclockwise, HIGH);// ...direction

of motor

delay(4000);

digitalWrite



}
