//import processing.serial.*; //imports processing library 

char incomingByte;   // for incoming serial data

int rightPin=10;
int leftPin=11;
int upPin=12;
int downPin=13;

void setup() {
        //pinModes for 4 directions
        pinMode(rightPin,OUTPUT);
        pinMode(leftPin,OUTPUT);
        pinMode(upPin,OUTPUT);
        pinMode(downPin,OUTPUT);
        //begin serial port at 9600
        Serial.begin(9600);
}

void loop() {
  //Serial port;

  if(keyPressed){
    if(key=='w'|| key=='W'){//Up
      digitalWrite(13, HIGH);
    }else if(key=='s'|| key=='S'){//Down
      digitalWrite(12, HIGH);
    }else if(key=='d'|| key=='D'){//Right
      digitalWrite(11, HIGH);
    }else if(key=='a'|| key=='A'){//Left
      digitalWrite(10, HIGH);
    }
  }else{
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }

     /*   // send data only when you receive data:
        if (Serial.available() ) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte);
        }
        
         if (incomingByte == 'h' || incomingByte == 'H')
        {
          digitalWrite(13, HIGH);
        }
        else
        {
        digitalWrite(13, LOW);
        } */
          
}
