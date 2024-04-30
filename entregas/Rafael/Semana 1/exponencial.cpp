// C++ code
//
void setup()
{
	Serial.begin(9600);
}

void loop()
{
  for(float i = 0; i < 5; i = i + 0.01)
  	Serial.println(exp(i));
}