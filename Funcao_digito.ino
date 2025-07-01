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
      digitalWrite(pinoD,HIGH);
      digitalWrite(pinoE,LOW);
      digitalWrite(pinoF,HIGH);
      digitalWrite(pinoG,HIGH);
      break;
    }
} 
