// This is the photo transitor input

int photo_transitor = A0;

// variable to hold analog data from the photo transitor

String analog_value;

void setup() {
}

void loop() {
    
    // Read lux data and convert from int to string
    analog_value = String(analogRead(photo_transitor));
    
    // Publish the lux data
    Particle.publish("light", analog_value, PRIVATE);
    
    delay(30000);
}
