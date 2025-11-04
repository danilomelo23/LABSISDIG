

void setup() {
    Serial.begin(9600);
}

int VA5 = 0;
int VA5_atu = 0;
int VA5_ant = 0;
float V1 = 5.0;
float R1 = 10000.0;

void loop() {
    VA5_ant = VA5;
    VA5 = analogRead(A5);
    if (abs(VA5 - VA5_ant) > 4) {
        VA5_atu = VA5;
    }
    Serial.print("VA5_atu=");
    Serial.println(VA5_atu);
    float V2 = (VA5_atu * V1) / 1024.0;
    float R2 = ( V2 * R1) / (V1 - V2);
    Serial.print("R2=");
    Serial.println(R2);
}



