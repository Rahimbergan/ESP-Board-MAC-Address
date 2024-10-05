#ifdef ESP32
  #include <WiFi.h>  // ESP32 uchun WiFi kutubxonasi
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>  // ESP8266 uchun WiFi kutubxonasi
#endif

void setup() {
  Serial.begin(115200); // Serial monitorni boshlash
  delay(1000); // Biroz vaqt kutish

  // MAC adresni olish va chiqarish
  String macAddress = WiFi.macAddress();
  Serial.print("Qurilmaning MAC adresi: ");
  Serial.println(macAddress);
}

void loop() {
  // Loop qismida hech narsa bajarilmaydi
}