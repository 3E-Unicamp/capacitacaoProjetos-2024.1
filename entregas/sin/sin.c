#include <math.h>

void setup () 
{
 Serial.begin(9600); 
  
} 


void loop () 
{
  for (float c = 0; c < 50 ; c = c  + 0.1) {
    Serial.println(sin(c));
    delay(10);
  }
  
