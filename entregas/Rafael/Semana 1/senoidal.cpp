// C++ code
//
void setup()
{
	Serial.begin(9600);
}

void loop()
{
  for(float i = 0; i < 2; i = i + 0.01)
  	Serial.println(sin(i * PI));
}