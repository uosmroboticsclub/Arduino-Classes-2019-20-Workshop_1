/*
 * Author : Lim Yi Farn
 * 
 * Date Created: 22nd Nov 2019
*/

/*
 * Create a waveform like lights from pin 2 to pin 13
 */

void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 14; i++) {
    pinMode (i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 2; i < 14; i++) {
    digitalWrite (i, HIGH);
    if (i <= 5) {
      digitalWrite(13 - (5 - i), LOW);
    }
    else{
      digitalWrite(i - 4, LOW);
    }
    
    delay(100);
  }
}
