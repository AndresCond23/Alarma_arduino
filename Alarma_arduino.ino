int sensor; 
#define buzzer 4 // Pin del speaker

void setup() { // código de configuración 

Serial.begin(9600); //Inicializamos la primera comunicacion Serial.
pinMode(buzzer, OUTPUT); // Declariacion del speaker como salida

}

void loop() {
  
  sensor = analogRead(A0);

  if (sensor > 200) {  // Comprobar si el sensor está activado

    digitalWrite(buzzer, HIGH);  // Encender el speaker

  } else{

    digitalWrite(buzzer, LOW);
  }
  
  Serial.println(sensor);
  delay(1000);
  
}
