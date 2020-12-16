int piezoPin = 8; // Buzzer'ın pozitif bacağını geliştirme kartınızın D8 pinine takın

void setup() {

}

void loop() {

// tone fonksiyonu kullanıldı. tone(a,b,c)
  // a = pin numarası
  // b = frekans
  // c = çalma süresi
  
  tone(piezoPin, 1000, 500);
  delay(1000);

}
