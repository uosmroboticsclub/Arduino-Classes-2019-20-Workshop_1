/*
 * Author : Lim Yi Farn
 * 
 * Date Created: 22nd Nov 2019
*/

/*
 * Mini piano with capacitive touch
 */

#include <CapacitiveSensor.h>

uint16_t noteFreq[] { // Frequency corresponding to each notes

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
};

// Initialise pins for capacitive touch
CapacitiveSensor capSensor_4_9 = CapacitiveSensor (4, 9); // (OUT, IN)
CapacitiveSensor capSensor_4_10 = CapacitiveSensor (4, 10);

void setup() {

}

void loop() {

  // Read and store value
  long value1 = capSensor_4_9.capacitiveSensor(30); 
  long value2 = capSensor_4_10.capacitiveSensor(30);

  // Play certain frequency when touched
  if (value1>200) tone (8, noteFreq[7]);
  if (value2>200) tone (8, noteFreq[8]);

  // No sound
  if (value1<200 && value2<200) noTone (8);
  
  delay (50);
  
}
