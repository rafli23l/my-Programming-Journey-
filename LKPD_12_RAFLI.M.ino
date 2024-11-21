//RAFLI MAULANA
//XI TAV 1
#define DHTPIN 32
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();}
void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Gagal membaca dari sensor DHT11");
  } else {
    Serial.print("kelembaban: ");
    Serial.print(humidity);
    Serial.print("% SUHU: ");
    Serial.print(temperature);
    Serial.println("C");}
delay(2000);}
