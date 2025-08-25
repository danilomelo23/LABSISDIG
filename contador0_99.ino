const int Seg_A = 7;
const int Seg_B = 6;
const int Seg_C = 5;
const int Seg_D = 4;
const int Seg_E = 3;
const int Seg_F = 2;
const int Seg_G = 8;
const int S1_K = 18;
const int S2_K = 19;

void setup() {
  pinMode(Seg_A, OUTPUT);
  pinMode(Seg_B, OUTPUT);
  pinMode(Seg_C, OUTPUT);
  pinMode(Seg_D, OUTPUT);
  pinMode(Seg_E, OUTPUT);
  pinMode(Seg_F, OUTPUT);
  pinMode(Seg_G, OUTPUT);
  pinMode(S1_K, OUTPUT);
  pinMode(S2_K, OUTPUT);
}

void digito(int num) {
  switch (num) {
    case 0:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,HIGH);
      digitalWrite(Seg_F,HIGH);
      digitalWrite(Seg_G,LOW);
      break;
    case 1:
      digitalWrite(Seg_A,LOW);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,LOW);
      digitalWrite(Seg_E,LOW);
      digitalWrite(Seg_F,LOW);
      digitalWrite(Seg_G,LOW);
      break;
    case 2:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,LOW);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,HIGH);
      digitalWrite(Seg_F,LOW);
      digitalWrite(Seg_G,HIGH);
      break;
    case 3:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,LOW);
      digitalWrite(Seg_F,LOW);
      digitalWrite(Seg_G,HIGH);
      break;
    case 4:
      digitalWrite(Seg_A,LOW);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,LOW);
      digitalWrite(Seg_E,LOW);
      digitalWrite(Seg_F,HIGH);
      digitalWrite(Seg_G,HIGH);
      break;
    case 5:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,LOW);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,LOW);
      digitalWrite(Seg_F,HIGH);
      digitalWrite(Seg_G,HIGH);
      break;
    case 6:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,LOW);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,HIGH);
      digitalWrite(Seg_F,HIGH);
      digitalWrite(Seg_G,HIGH);
      break;
    case 7:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,LOW);
      digitalWrite(Seg_E,LOW);
      digitalWrite(Seg_F,LOW);
      digitalWrite(Seg_G,LOW);
      break;
    case 8:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,HIGH);
      digitalWrite(Seg_F,HIGH);
      digitalWrite(Seg_G,HIGH);
      break;
    case 9:
      digitalWrite(Seg_A,HIGH);
      digitalWrite(Seg_B,HIGH);
      digitalWrite(Seg_C,HIGH);
      digitalWrite(Seg_D,HIGH);
      digitalWrite(Seg_E,LOW);
      digitalWrite(Seg_F,HIGH);
      digitalWrite(Seg_G,HIGH);
      break;
    }
} 

unsigned long previousMillis = 0; // tempo da última mudança
unsigned long currentMillis = 0; // variável para armazenar o valor de millis() atual
const unsigned long interval = 300; // intervalo em ms (0.3 segundo)
int d = 0; // dezena
int u = 0; // unidade

// Loop principal
void loop() {
  currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // salva o tempo da última mudança
    previousMillis = currentMillis;
    u++; // aumenta 1 unidade a variavel da unidade
    if (u > 9) {
      u = 0;
      d++;
    }
    if (d > 9) {
      d = 0;
    }
  }
  
  // Envia as variaveis "d" e "u" para os DISPLAYS (dezena e unidade)
  // Seleciona o DISPLAY da dezena
  digitalWrite(S1_K, LOW); // Ativa o DISPLAY da DEZENA
  digitalWrite(S2_K, HIGH);  // Desativa o DISPLAY da UNIDADE
  digito(d);  // Chama a função digito() para enviar o conteúdo da variável "d" (dezena) para o DISPLAY
  delay(1);
  // Seleciona o DISPLAY da unidade
  digitalWrite(S1_K, HIGH); // Desativa o DISPLAY da DEZENA
  digitalWrite(S2_K, LOW);  // Ativa o DISPLAY da UNIDADE
  digito(u);   // Chama a função digito() para enviar o conteúdo da variável "u" (unidade) para o DISPLAY
  delay(1);

}