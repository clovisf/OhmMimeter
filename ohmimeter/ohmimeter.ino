const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

float rawResistance = 0.000;        // value read from the pot
float resistance = 0.000;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(115200);
}

void loop() {
  // read the analog in value:
  rawResistance = analogRead(analogInPin)*0.004995; //divider resistor: 9880 ohms

  resistance = (987000/(100-(rawResistance*19.569)))-9870.00; 


  // print the results to the serial monitor:
  Serial.print("Voltage= " );
  Serial.println(rawResistance,4);
  Serial.print("Resistance= " );
  Serial.println(resistance,4);

  delay(1000);
}
