// Pinos conectados ao HC-SR04
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Inicia a comunicação serial para monitorar a distância
  Serial.begin(9600);
  
  // Configura os pinos
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Condição inicial
  digitalWrite(trigPin, LOW);
  delay(50);
}

void loop() {
  // Envia pulso de Trig
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leitura do pulso de Echo (duração em microssegundos)
  // pulseIn retorna a duração do pulso HIGH no EchoPin
  unsigned long duracao = pulseIn(echoPin, HIGH, 20000); // timeout opcional (20 ms)

  // Calcula a distância:  
  // velocidade do som ~ 343 m/s = 34300 cm/s = 0.0343 cm/us
  // distância (cm) = duration (us) * 0.0343 / 2
  float distanceCm = duracao * 0.0343 / 2.0;

  // Em caso de timeout (sem obstáculo dentro do alcance), variavel duracao será 0
  if (duracao == 0) {
    Serial.println("Aguarde: sem leitura (timeout).");
  } else {
    Serial.print("Distância: ");
    Serial.print(distanceCm);
    Serial.println(" cm");
  }

  // Pequeno atraso entre leituras
  delay(100);
}
