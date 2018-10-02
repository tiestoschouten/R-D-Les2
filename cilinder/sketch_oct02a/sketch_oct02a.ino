float pi = 3.14;
float diameter = 40;
float height = 20;

void setup()
{
  Serial.begin(9600);
}

void loop()

{
  //calculate volume cilindre
  float volume = pi * (diameter / 2) * (diameter / 2) * height;
  Serial.println("Inhoud van een cilinder ================");
  Serial.print ("hoogte ");
  Serial.print (height);
  Serial.print (" diameter, ");
  Serial.print (diameter);
  Serial.print (" de inhoud is ");
  Serial.print (volume);
  Serial.println ("cm3");
  delay (1000);

}
