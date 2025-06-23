const int pinoA = 2;
const int pinoB = 3;
const int pinoC = 4;
const int pinoD = 5;
const int pinoE = 6;
const int pinoF = 7;
const int pinoG = 8;
const int KH1 = 14;
const int KH2 = 15;
const int KM1 = 16;
const int KM2 = 17;
const int KS1 = 18;
const int KS2 = 19;
const int Tdelay = 4;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
const long interval = 983;
int s1, s2 = 0;
int h1 = 1;
int h2 = 7;
int m1 = 5;
int m2 = 2;


void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(pinoA, OUTPUT);
  pinMode(pinoB, OUTPUT);
  pinMode(pinoC, OUTPUT);
  pinMode(pinoD, OUTPUT);
  pinMode(pinoE, OUTPUT);
  pinMode(pinoF, OUTPUT);
  pinMode(pinoG, OUTPUT);
  pinMode(KH1, OUTPUT);
  pinMode(KH2, OUTPUT);
  pinMode(KM1, OUTPUT);
  pinMode(KM2, OUTPUT);
  pinMode(KS1, OUTPUT);
  pinMode(KS2, OUTPUT);
}

void digito(int num) {
  switch (num) {
    case 0:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,HIGH);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,LOW);
      break;
case 1:
      digitalWrite(pinoA,LOW);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,LOW);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,LOW);
      digitalWrite(pinoG,LOW);
      break;
case 2:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,LOW);
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,HIGH);
      digitalWrite(pinoF,LOW);
      digitalWrite(pinoG,HIGH);
      break;
case 3:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,LOW);
      digitalWrite(pinoG,HIGH);
      break;
case 4:
      digitalWrite(pinoA,LOW);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,LOW);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,HIGH);
      break;
case 5:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,LOW);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,HIGH);
      break;
case 6:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,LOW);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,HIGH);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,HIGH);
      break;
case 7:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,LOW);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,LOW);
      digitalWrite(pinoG,LOW);
      break;
case 8:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,HIGH);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,HIGH);
      break;
case 9:
      digitalWrite(pinoA,HIGH);
      digitalWrite(pinoB,HIGH);
      digitalWrite(pinoC,HIGH);
      digitalWrite(pinoD,LOW);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,HIGH);
      break;

  }
  
}


void loop() {
  // put your main code here, to run repeatedly:

  // Envia digito S2
  digitalWrite(KS2, LOW);
  digitalWrite(KS1, HIGH);
  digitalWrite(KM1, HIGH);
  digitalWrite(KM2, HIGH);
  digitalWrite(KH1, HIGH);
  digitalWrite(KH2, HIGH);
  digito(s2);
  delay(Tdelay);

  // Envia digito S1
  digitalWrite(KS2, HIGH);
  digitalWrite(KS1, LOW);
  digitalWrite(KM1, HIGH);
  digitalWrite(KM2, HIGH);
  digitalWrite(KH1, HIGH);
  digitalWrite(KH2, HIGH);
  digito(s1);
  delay(Tdelay);

  // Envia digito M2
  digitalWrite(KS2, HIGH);
  digitalWrite(KS1, HIGH);
  digitalWrite(KM1, HIGH);
  digitalWrite(KM2, LOW);
  digitalWrite(KH1, HIGH);
  digitalWrite(KH2, HIGH);
  digito(m2);
  delay(Tdelay);

  // Envia digito M1
  digitalWrite(KS2, HIGH);
  digitalWrite(KS1, HIGH);
  digitalWrite(KM1, LOW);
  digitalWrite(KM2, HIGH);
  digitalWrite(KH1, HIGH);
  digitalWrite(KH2, HIGH);
  digito(m1);
  delay(Tdelay);

  // Envia digito H2
  digitalWrite(KS2, HIGH);
  digitalWrite(KS1, HIGH);
  digitalWrite(KM1, HIGH);
  digitalWrite(KM2, HIGH);
  digitalWrite(KH1, HIGH);
  digitalWrite(KH2, LOW);
  digito(h2);
  delay(Tdelay);

  // Envia digito H1
  digitalWrite(KS2, HIGH);
  digitalWrite(KS1, HIGH);
  digitalWrite(KM1, HIGH);
  digitalWrite(KM2, HIGH);
  digitalWrite(KH1, LOW);
  digitalWrite(KH2, HIGH);
  digito(h1);
  delay(Tdelay);

  currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // salva o tempo atual
    previousMillis = currentMillis;
    s2++;
    if (s2 > 9) {
      s2 = 0;
      s1++;
    }
    if (s1 > 5) {
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
    if ((h1 == 2) && (h2 > 3)) {
      h1 = 0;
      h2 = 0;
    }

  }

}
