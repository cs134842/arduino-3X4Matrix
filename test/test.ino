// This is one of the two files I used to test my led matrix

void setup(){
 for (int i=0; i<7; i++){
   pinMode(i, OUTPUT);
 }
}
void loop(){
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

}
