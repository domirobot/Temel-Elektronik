
#define echoPin 6 // Sensörünüzdeki "echo" pinini kartınızın dijital 6 pinine takın
#define trigPin 5 // Sensörünüzdeki "trig" pinini kartınızın dijital 5 pinine takın

//gerekli değişkenler
long sure; // Ses dalgası hareket süresi değişkeni tanımlandı
int uzak; // Uzaklık değişkeni tanımlandı

void setup() {
  pinMode(trigPin, OUTPUT); // Sensörün "trig" pini çıktı olarak tanımlandı
  pinMode(echoPin, INPUT); // Sensörün "echo" pini girdi olarak tanımlandı
  Serial.begin(9600); // // Seri iletişim 9600 baudrate hızı ile başlatıldı
  Serial.println("Ultrasonic Sensör Testi"); // print some text in Serial Monitor
}
void loop() {
  //trigPin Ayarları
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // echoPin okundu, milisaniye olarak kaydedildi
  sure = pulseIn(echoPin, HIGH);
  // Uzaklık hesaplaması
  uzak = sure * 0.034 / 2; // ses hızı/2
  // Uzaklık seri monitöre yazıldı
  Serial.print("Uzaklık: ");
  Serial.print(uzak);
  Serial.println(" cm");
}
