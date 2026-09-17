#include <Adafruit_TinyUSB.h>
#include <MD_YX5300.h>

const uint8_t BUTTON_PIN = D2;

MD_YX5300 mp3(Serial1);

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial1.begin(MD_YX5300::SERIAL_BPS);
  mp3.begin();
  mp3.volume(20);

  Serial.println("MP3 player ready");
  Serial.println("Press the button to play the next track");
}

void loop() {
  
}