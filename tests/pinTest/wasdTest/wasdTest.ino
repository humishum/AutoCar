char incomingByte;   // for incoming serial data

void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
        pinMode(13,OUTPUT);
        digitalWrite(13, LOW);
}

void loop() {

        // send data only when you receive data:
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
        } 
          
}
