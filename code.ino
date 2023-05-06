int mousePinX = A0;  // Mouse X-axis data pin
int mousePinY = A5;  // Mouse Y-axis data pin

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int mouseX = analogRead(mousePinX);  // Read X-axis data
  int mouseY = analogRead(mousePinY);  // Read Y-axis data

  // Display the coordinates on the serial monitor
  Serial.print("X: ");
  Serial.print(mouseX);
  Serial.print("\tY: ");
  Serial.println(mouseY);

  delay(100);  // Delay between readings
}
