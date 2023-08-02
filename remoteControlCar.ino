
char t1;
char t2;
 
void setup() {
pinMode(13,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse

Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t1 = Serial.read();
  Serial.println(t1);
}
 
if(t1 == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
    if(Serial.available()){
    t2 = Serial.read();
    Serial.println(t2);}
  if(t2 == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  } 
  else if(t2 == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);}
}
 
else if(t1 == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
    if(Serial.available()){
    t2 = Serial.read();
    Serial.println(t2);}
  if(t2 == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);} 
  else if(t2 == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);} }
}
 
else if(t1 == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  if(Serial.available()){
    t2 = Serial.read();
    Serial.println(t2);}
  if(t2 == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  }
  else if(t2 == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  }
}
 
else if(t1 == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
   if(Serial.available()){
    t2 = Serial.read();
    Serial.println(t2);}
  if(t2 == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  }
  else if(t2 == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  }
}
//else{      //STOP (all motors stop)
 // digitalWrite(13,LOW);
 // digitalWrite(12,LOW);
 //igitalWrite(11,LOW);
  //digitalWrite(10,LOW);
//}
}
