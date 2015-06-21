int btn[] = {0, A0, A1};
int btnState[] = {0,0,0};
int lstState[] = {0,0,0};
char ltr[] = {'a', 'b', 'c'};

void setup() {
  pinMode(btn[0], INPUT);
  pinMode(btn[1], INPUT);
  pinMode(btn[2], INPUT);
  Keyboard.begin();
}
void loop() {
  for(int c=0; c<3;c++) {
    btnState[c] = digitalRead(btn[c]);
    if (btnState[c] == 1) {
      if (lstState[c] == 0) {
        lstState[c] = 1;
        Keyboard.print(ltr[c]);
      }
    } else {
      lstState[c] = 0;
    }
    delay(50);
  }
}
