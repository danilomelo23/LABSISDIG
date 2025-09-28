const int Seg_A = 7;
const int Seg_B = 6;
const int Seg_C = 5;
const int Seg_D = 4;
const int Seg_E = 3;
const int Seg_F = 2;
const int Seg_G = 8;
const int H1_K = 14;
const int H2_K = 15;
const int M1_K = 16;
const int M2_K = 17;
const int S1_K = 18;
const int S2_K = 19;
const int Push1 = 10;
const int Push2 = 11;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(Seg_A, OUTPUT);
  pinMode(Seg_B, OUTPUT);
  pinMode(Seg_C, OUTPUT);
  pinMode(Seg_D, OUTPUT);
  pinMode(Seg_E, OUTPUT);
  pinMode(Seg_F, OUTPUT);
  pinMode(Seg_G, OUTPUT);
  pinMode(H1_K, OUTPUT);
  pinMode(H2_K, OUTPUT);
  pinMode(M1_K, OUTPUT);
  pinMode(M2_K, OUTPUT);
  pinMode(S1_K, OUTPUT);
  pinMode(S2_K, OUTPUT);
  pinMode(Push1, INPUT);
  pinMode(Push2, INPUT);
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

unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
const int interval = 10;
int s1 = 0;
int s2 = 0;
int h1 = 0;
int h2 = 0;
int m1 = 0;
int m2 = 0;

void relogio_contadores() {
  currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // salva o tempo atual na variavel previousMillis
    previousMillis = currentMillis;
    s2++;
    if (s2 > 9) {
      s2 = 0;
      s1++;
    }
    if (s1 > 9) {
      s1 = 0;
      m2++;
    }
    if (m2 > 9) {
      m2 = 0;
      m1++;
    }
    if (m1 > 5) {
      m1 = 0;
      h2++;
    }
    if (h2 > 9) {
      h2 = 0;
      h1++;
    }
    if (h1 > 5) {
      h1 = 0;
    }

  }

}

void relogio_display() {

  // Envia digito S2
  digitalWrite(S2_K, LOW);
  digitalWrite(S1_K, HIGH);
  digitalWrite(M1_K, HIGH);
  digitalWrite(M2_K, HIGH);
  digitalWrite(H1_K, HIGH);
  digitalWrite(H2_K, HIGH);
  digito(s2);
  delay(1);

  // Envia digito S1
  digitalWrite(S2_K, HIGH);
  digitalWrite(S1_K, LOW);
  digitalWrite(M1_K, HIGH);
  digitalWrite(M2_K, HIGH);
  digitalWrite(H1_K, HIGH);
  digitalWrite(H2_K, HIGH);
  digito(s1);
  delay(1);

  // Envia digito M2
  digitalWrite(S2_K, HIGH);
  digitalWrite(S1_K, HIGH);
  digitalWrite(M1_K, HIGH);
  digitalWrite(M2_K, LOW);
  digitalWrite(H1_K, HIGH);
  digitalWrite(H2_K, HIGH);
  digito(m2);
  delay(1);

  // Envia digito M1
  digitalWrite(S2_K, HIGH);
  digitalWrite(S1_K, HIGH);
  digitalWrite(M1_K, LOW);
  digitalWrite(M2_K, HIGH);
  digitalWrite(H1_K, HIGH);
  digitalWrite(H2_K, HIGH);
  digito(m1);
  delay(1);

  // Envia digito H2
  digitalWrite(S2_K, HIGH);
  digitalWrite(S1_K, HIGH);
  digitalWrite(M1_K, HIGH);
  digitalWrite(M2_K, HIGH);
  digitalWrite(H1_K, HIGH);
  digitalWrite(H2_K, LOW);
  digito(h2);
  delay(1);

  // Envia digito H1
  digitalWrite(S2_K, HIGH);
  digitalWrite(S1_K, HIGH);
  digitalWrite(M1_K, HIGH);
  digitalWrite(M2_K, HIGH);
  digitalWrite(H1_K, LOW);
  digitalWrite(H2_K, HIGH);
  digito(h1);
  delay(1);


}

bool P1 = LOW;
bool P1_ant = LOW;
bool P2 = LOW;
bool ativado = false;
bool repique = false;


void loop() {

  P1 = digitalRead(Push1);
  if ((P1 == HIGH) && (P1_ant == LOW) && (repique == false)) {
    ativado = !ativado;
    repique = true;
  }
  if (P1 == LOW) {
    repique = false;
  }
  P1_ant = P1;

  if (ativado == true) {
    relogio_contadores();
  }

  P2 = digitalRead(Push2);
  if (P2 == HIGH) {
    h1 = 0;
    h2 = 0;
    m1 = 0;
    m2 = 0;
    s1 = 0;
    s2 = 0;
  }

  relogio_display();
}