  /*
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */
#define redLED 8
int HumidSoil = 300;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port

  if (val < HumidSoil){
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(redLED, HIGH);
  }
  else {
    digitalWrite(redLED,LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(1000);
}
