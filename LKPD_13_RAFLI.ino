#define MQ2pin 16 // mendefinisikan pin yang terhubung ke sensor MQ2
int sensorValue; // Variabel untuk menyimpan nilai sensor
void setup() {
  Serial.begin(9600); //Mulai komunikasi serial dengan kecepatan 9600 baud
  Serial.println("Memanaskan MQ2"); // Cetak pesan "Memanaskan MQ2" ke port serial
  delay(20000);}
void loop() {
  sensorValue = digitalRead(MQ2pin);
  Serial.print("Digital Output: ");
  Serial.print(sensorValue);
  if (sensorValue) {
    Serial.println(" | Smoke/Gas: Tidak Terdeteksi");
  } else {
    Serial.println(" | Smoke/Gas: Terdeteksi!");}
  delay(2000);}
