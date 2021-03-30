
#define pump 3
#define svalve 5

void setup() {
  
pinMode(pump,INPUT);
pinMode(svalve,OUTPUT); 
  

}

void loop() {

 
 if (digitalRead(pump)==HIGH){

 digitalWrite(svalve,HIGH);
 

 }

 else {
  
 digitalWrite(svalve,LOW);
 
}

  

}
