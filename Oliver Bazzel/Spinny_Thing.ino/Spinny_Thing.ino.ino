

int motor = 2;


void setup(){

pinMode(motor,OUTPUT);




  
}



void loop(){


int speed = 255;



analogWrite(motor,speed);
}
