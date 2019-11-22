/*
 * Author : Lim Yi Farn
 * 
 * Date Created: 22nd Nov 2019
*/

/*
 * Playing from lowest notes to hightest and back to lowest
 */

uint16_t noteFreq[] {  // Frequency for each notes

  131, //C
  147, //D
  165, //E
  175, //F
  196, //G
  220, //A
  247, //B
  262, //C
  294, //D
  329, //E
  349, //F
  392, //G
  440, //A
  493, //B
  523, //C
};


void setup() {

}

void loop() {

  // Scaling up
  for (int i = 0; i < 15; i++) {
    tone(8, noteFreq[i]);  
    delay (150);
  }

  //Scaling down
  for (int i = 13; i > 0; i--) {
    tone(8, noteFreq[i]);  
    delay (150);
  }
  
  
  
}
