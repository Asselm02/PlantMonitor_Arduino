const int sensorPin = A0;  
const int ledPin = 8;      
const int dryThreshold = 500;  

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int moisture = analogRead(sensorPin);
  Serial.print("Soil moisture level: ");
  Serial.println(moisture);

  if (moisture > dryThreshold) {
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW);   
  }

  delay(1000);  
}
