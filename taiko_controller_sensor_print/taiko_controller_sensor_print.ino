
int raw[4] = {0, 0, 0, 0};
const int pin[4] = {A3, A0, A2, A1};

void sample() {
  raw[0] = analogRead(pin[0]);
  raw[1] = analogRead(pin[1]);
  raw[2] = analogRead(pin[2]);
  raw[3] = analogRead(pin[3]);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  sample();
  
  if (raw[0]+raw[1]+raw[2]+raw[3] > 0){
    Serial.print(raw[0]);
    Serial.print("\t");
    Serial.print(raw[1]);
    Serial.print("\t");
    Serial.print(raw[2]);
    Serial.print("\t");
    Serial.print(raw[3]);
    Serial.println();
  }
  
}
