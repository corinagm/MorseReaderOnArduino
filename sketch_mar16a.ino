void checkLetter(char x)
{
  switch (toupper(x))
  {
  case 'A':
  
    digitalWrite(blinkingLed, HIGH);         // . _
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;  
  case 'B':
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);                            // _ . . . 
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;
  case 'C':
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);        // _ . _ .
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'D':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);                       // _ . . 
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'E':

    digitalWrite(blinkingLed, HIGH);
    delay(500);                // .
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'F':

    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);                           // . . _ .  
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'G':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);                           // _ _ .
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'H':

    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);                        // . . . .
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'I':

    digitalWrite(blinkingLed, HIGH);
    delay(500);                           // . .
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'J':

    digitalWrite(blinkingLed, HIGH);
    delay(500);                           // . _ _ _
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'K':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);        // _ . _ 
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'L':

    digitalWrite(blinkingLed, HIGH);        // . _ . .
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'M':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);                           // _ _
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'N':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);        // _ .  
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'O':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'P':

    digitalWrite(blinkingLed, HIGH);        // . _ _ .
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'Q':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);               // _ _ . _
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'R':

    digitalWrite(blinkingLed, HIGH);        // . _ . 
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'S':

    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);                        // . . . 
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'T':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);       // _
    delay(300);
    break;

  case 'U':

    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);                           // . . _  
    break;

  case 'V':

    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);                        // . . . _
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'W':

    digitalWrite(blinkingLed, HIGH);
    delay(500);                           // . _ _ 
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'X':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);                        // _ . . _
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'Y':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);                        // _ . _ _
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

  case 'Z':

    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(1000);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);                        // _ _ . .
    digitalWrite(blinkingLed, LOW);
    delay(300);
    digitalWrite(blinkingLed, HIGH);
    delay(500);
    digitalWrite(blinkingLed, LOW);
    delay(300);
    break;

    case ' ':
    digitalWrite(pauseLed, HIGH);
    delay(2000);
    digitalWrite(pauseLed, LOW);
    delay(300);
    break;

  }
}

const int blinkingLed = 13;
const int pauseLed = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(blinkingLed, OUTPUT);
  pinMode(pauseLed, OUTPUT);

}

void loop() {
  String input;
  if(Serial.available())
  {
    input=Serial.readString();
    for(int i=0; i<input.length(); i++)
      checkLetter(input[i]);
  }
}
