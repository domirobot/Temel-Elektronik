int ledPin = 11; // Gösterge olarak geliştirme kartınızın D11 pinine LED takın          
int pirPin = 8;  // PIR sensörün sinyal ucunu geliştirme kartınızın D8 pinine takın              
int pirStat = 0; // PIR başlangıç durumu                 
void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(pirPin, INPUT);     
 Serial.begin(9600);
}
void loop(){
 pirStat = digitalRead(pirPin); 
 if (pirStat == HIGH) {            // Eğer hareket algılanırsa
   digitalWrite(ledPin, HIGH);  // LED yanar
   Serial.println("Hey! Seni yakaladım!!"); // Seri monitörde yazar
 } 
 else {
   digitalWrite(ledPin, LOW); // Eğer hareket yoksa, LED kapanır
   Serial.println("Burada hiçbir şey yok..."); // Seri monitörde yazar
 }
} 
