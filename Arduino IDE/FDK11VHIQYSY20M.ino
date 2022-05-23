
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  float voltageA0 = (float)analogRead(A0)*5/1023;
  //Serial.println(voltageA0);
  float voltageA1 = (float)analogRead(A1)*5/1023;
  //Serial.println(voltageA1);
  float out = (float(voltageA0-voltageA1));
  
  float readed = Serial.read();
  if(voltageA1 > 4.9 ){
    digitalWrite(3, LOW);
  }else if(voltageA1 < 0.1){
    digitalWrite(3, HIGH);
  }

  delay(200);
  Serial.println(abs(out));
}

//voltageA0 > 4.9 || 
//voltageA0 < 0.1 || 
