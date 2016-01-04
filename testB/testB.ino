// This is the second file I used to test my 3x4 LED matrix

void setup(){
 for (int i=0; i<7; i++){
   pinMode(i, OUTPUT);
 }
}

void loop(){
  for (int i=1; i<4; i++){
    if (i==1){
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
   
    }
    if (i==2){
     digitalWrite(0, HIGH);
     digitalWrite(1, LOW);
     digitalWrite(2, HIGH);
    }
    if (i==3){
     digitalWrite(0, HIGH);
     digitalWrite(1, HIGH);
     digitalWrite(2, LOW);
    }
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    
    delay(1000);
    
  
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    
    delay(1000);
    
  
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    
    delay(1000);
    
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
  
    delay(1000);
  }

}
