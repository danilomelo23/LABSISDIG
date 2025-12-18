#include <SixDigitDisplayBL.h>

// Cria uma instância (display) usando a Classe SixDigitDisplayBL, 
// usando os pinos default

SixDigitDisplayBL display; // Ou customize os pinos, exemplo: 
                           //SixDigitDisplay display(7,6,5,4,3,2,8,14,15,16,17,18,19);



void setup() {
    display.begin();
}

void loop() {

    display.displayNumber(4527);
    
}



