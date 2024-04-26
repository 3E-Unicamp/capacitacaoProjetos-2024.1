#include <math.h>


void setup()
{
	Serial.begin(9600);
}

void loop () {

  for (float c = 0; c < 1000000; c = c + 0.5) {
  	Serial.println(pow(c, 2));
    delay(10);
  
  }
  
} 
