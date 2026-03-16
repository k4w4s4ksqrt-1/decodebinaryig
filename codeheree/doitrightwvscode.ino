int ognum; 
int binary;

void setup()
{
  Serial.begin(9600);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()

{
  ognum = analogRead(A0);
  binary = map(ognum, 0,1023,0,15);

  if(binary == 0){
  digitalWrite(1,LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  }

    if(binary == 1){
  digitalWrite(1,LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  }

    if(binary == 2){
  digitalWrite(1,LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  }

      if(binary == 3){
  digitalWrite(1,LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  }

        if(binary == 4){
  digitalWrite(1,LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  }

          if(binary == 5){
  digitalWrite(1,LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  }


          if(binary == 6){
  digitalWrite(1,LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  }


          if(binary == 7){
  digitalWrite(1,LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  }

  
          if(binary == 8){
  digitalWrite(1,HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  }

          if(binary == 9){
  digitalWrite(1,HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  }

            if(binary == 10){
  digitalWrite(1,HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  }

              if(binary == 11){
  digitalWrite(1,HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  }

              if(binary == 12){
  digitalWrite(1,HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  }

                if(binary == 13){
  digitalWrite(1,HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  }

  
              if(binary == 14){
  digitalWrite(1,HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  }

                if(binary == 15){
  digitalWrite(1,HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  }




   }