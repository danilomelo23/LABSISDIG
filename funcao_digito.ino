const int Seg_A = 7;
const int Seg_B = 6;
const int Seg_C = 5;
const int Seg_D = 4;
const int Seg_E = 3;
const int Seg_F = 2;
const int Seg_G = 8;

void setup() {
  pinMode(Seg_A, OUTPUT);
  pinMode(Seg_B, OUTPUT);
  pinMode(Seg_C, OUTPUT);
  pinMode(Seg_D, OUTPUT);
  pinMode(Seg_E, OUTPUT);
  pinMode(Seg_F, OUTPUT);
  pinMode(Seg_G, OUTPUT);
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


// Loop principal
void loop() {

  
}
