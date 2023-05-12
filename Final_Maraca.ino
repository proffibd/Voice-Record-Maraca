const int P_E = 5;
const int REC = 6;
const int button = 3;
const int tilt = 2;

int buttonState = 0;
int tiltState = 0;

float cf = 190.5;

float vout;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(P_E, INPUT_PULLUP);
  pinMode(button, INPUT);
  pinMode(tilt, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  tiltState = digitalRead(tilt);


  if (buttonState == HIGH) {
    // turn REC on:
    digitalWrite(REC, HIGH);
    Serial.print("Recording...");
    delay(200);
  } 
  else {
    // turn REC off:
    digitalWrite(REC, LOW);
  }
  if (tiltState == HIGH) {
    // turn P_E on:
    digitalWrite(P_E, HIGH);
    Serial.print("Playing");
    delay(200);
  } 
  else {
    // turn P_E off:
    digitalWrite(P_E, LOW);
  }
  
}
