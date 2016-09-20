void setup() {
  pinMode(13, OUTPUT);//Mengatur Digital Pin 13 Sebagai OUTPUT
}
void loop() {
  digitalWrite(13, HIGH);   // Menyalakan LED
  delay(3000);              // Menunggu 3 detik
  digitalWrite(13, LOW);    // Mematikan LED
  delay(3000);              // Menunggu 3 detik
}
