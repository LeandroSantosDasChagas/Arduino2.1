// C++ code
//
int Definir = 0;

int ler_pino = 0;

int Luminosidade = 0;

int Dist_C3_A2ncia = 0;

int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(4, 5);
  Serial.println(distancia);
  delay(1000); // Wait for 1000 millisecond(s)
}