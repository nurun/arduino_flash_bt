// This communication works between paired mac (use '1234') running serproxy and Flash and leonardo
// The softserial is neccisary, the serial does not work with the leonardo
// Will test again with the lilypad to see if 

#include <SoftwareSerial.h>

int bluetoothTx = 7;
int bluetoothRx = 8;
/* Note from Software Serial documention:
    Not all pins on the Leonardo support change interrupts, so 
    RX must be: 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).
*/
SoftwareSerial bluetooth(bluetoothRx, bluetoothTx);

char val; // variable to receive data from the serial port
int ledpin = 13; // LED connected to pin 13

void setup() {
  bluetooth.begin(115200);       
  Serial.begin(115200);       
}

void loop() {
  if( bluetooth.available() ){
    val = bluetooth.read();         // read it and store it in 'val'
  }
  
  if( Serial.available() ) {
    val = Serial.read();         // read it and store it in 'val'
  }
  
  if( val == 'H' ) {
    digitalWrite(ledpin, HIGH);  // turn ON the LED
  } else { 
    digitalWrite(ledpin, LOW);   // otherwise turn it OFF
  }
}

