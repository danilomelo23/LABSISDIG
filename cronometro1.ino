const int Seg_A = 7;
const int Seg_B = 6;
const int Seg_C = 5;
const int Seg_D = 4;
const int Seg_E = 3;
const int Seg_F = 2;
const int Seg_G = 8;
const int s2_k = 19;
const int s1_k = 18;
const int m2_k = 17;
const int m1_k = 16;
const int push1 = 11;
const int push2 = 10;


void setup() {
  pinMode(Seg_A, OUTPUT);
  pinMode(Seg_B, OUTPUT);
  pinMode(Seg_C, OUTPUT);
  pinMode(Seg_D, OUTPUT);
  pinMode(Seg_E, OUTPUT);
  pinMode(Seg_F, OUTPUT);
  pinMode(Seg_G, OUTPUT);
  pinMode(s2_k, OUTPUT);
  pinMode(s1_k, OUTPUT);
  pinMode(m1_k, OUTPUT);
  pinMode(m2_k, OUTPUT);
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
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

int cs = 0;
int dc = 0;
int s1 = 0;
int s2 = 0;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
const long interval = 9;
int Tdelay = 1;
bool P1 = LOW;
bool P2 = LOW;
bool P1_atual = LOW;
bool P1_ant = LOW;
bool P2_atual = LOW;
bool P2_ant = LOW;
bool repique1 = false;
bool repique2 = false;

// Loop principal
void loop() {

  // envia cs
  digitalWrite(s2_k, LOW);
  digitalWrite(s1_k, HIGH);
  digitalWrite(m2_k, HIGH);
  digitalWrite(m1_k, HIGH);
  digito(cs);
  delay(Tdelay);

  // envia ds
  digitalWrite(s2_k, HIGH);
  digitalWrite(s1_k, LOW);
  digitalWrite(m2_k, HIGH);
  digitalWrite(m1_k, HIGH);
  digito(dc);
  delay(Tdelay);

  // envia s2
  digitalWrite(s2_k, HIGH);
  digitalWrite(s1_k, HIGH);
  digitalWrite(m2_k, LOW);
  digitalWrite(m1_k, HIGH);
  digito(s2);
  delay(Tdelay);

  // envia s1
  digitalWrite(s2_k, HIGH);
  digitalWrite(s1_k, HIGH);
  digitalWrite(m2_k, HIGH);
  digitalWrite(m1_k, LOW);
  digito(s1);
  delay(Tdelay);

 
  // Liga/Desliga PushButton 1
  P1_atual = digitalRead(push1);
  if ((P1_atual == HIGH) && (P1_ant == LOW) && !(repique1)) {
    P1 = !P1;
    repique1 = true;
  }
  if (P1_atual == LOW) {
    repique1 = false;
  }
  P1_ant = P1_atual;
  
  // Liga/Desliga PushButton 2
  P2_atual = digitalRead(push2);
  if (P2_atual == HIGH) {
    // zera o cronometro
    cs = 0;
    dc = 0;
    s2 = 0;
    s1 = 0;
  }

  currentMillis = millis();
  if ((currentMillis - previousMillis >= interval) && (P1 == HIGH)) {
    // salva o tempo atual
    previousMillis = currentMillis;
    cs++;
    if (cs > 9) {
      cs = 0;
      dc++;
    }
    if (dc > 9) {
      dc = 0;
      s2++;
    }
    if (s2 > 9) {
      s2 = 0;
      s1++;
    }
  }

  
}