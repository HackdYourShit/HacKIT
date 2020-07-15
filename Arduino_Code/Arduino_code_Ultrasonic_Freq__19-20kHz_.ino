/*
HacKIT
Programming ATtiny45 - Ultrasonic frequency plays in the 19-20kHz range
*/

void setup() {
  DDRB = 0b00000011;
  PORTB = 0b00000001;
  TCCR0A = 0b00010010; // timer 0
  TCCR0B = 0b00000001; // timer 0
  OCR0A = 200;
  OCR0B = 200;
}

int timer = 0;

void loop() {
 
 byte offset_1 = random(15); // timer 0
 OCR0A = 190 + offset_1;
 OCR0B = 190 + offset_1;
 delayMicroseconds(5);


}
