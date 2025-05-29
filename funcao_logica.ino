// Definição dos pinos
const int pinoA = 2; // Pino da primeira entrada digital
const int pinoB = 3; // Pino da segunda entrada digital
const int saida = 13; // Pino de saída

// Variáveis booleanas (A = Entrada “A”, B = Entrada “B”, S = Saida)
bool A, B, S;

void setup() {
     // Configura os pinos como entrada ou saída
     pinMode(pinoA, INPUT);
     pinMode(pinoB, INPUT);
     pinMode(saida, OUTPUT);
}

void loop() {
    // Lê os estados das entradas
    A = digitalRead(pinoA);
    B = digitalRead(pinoB);

    // Realiza a operação Booleana
    S = A && B;

    // Escreve o resultado no pino de saída
    digitalWrite(saida, S);
}

