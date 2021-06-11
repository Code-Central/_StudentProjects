int led =0;           //Declare Variables

void setup(){        //setup variables

 pinMode(led,OUTPUT);

}

void loop(){

digitalWrite(led,HIGH);   //LED ON
delay(1000);   //Duration of one second
digitalWrite(led,LOW);  //LED OFF
delay(1000);   //Duration of one second


} 
