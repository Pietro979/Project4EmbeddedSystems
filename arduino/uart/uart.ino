String odebraneDane = ""; //Pusty ciąg odebranych danych
 
void setup() {
  Serial.begin(9600); //Uruchomienie komunikacji
  Serial2.begin(9600);
}
 
void loop() {
  if(Serial.available() > 0) { //Czy Arduino odebrało dane
    odebraneDane = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
    Serial.println("Witaj " + odebraneDane + "!"); //Wyświetl komunikat
  }
}
