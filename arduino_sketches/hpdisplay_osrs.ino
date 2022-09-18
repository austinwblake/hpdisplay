#include <FastLED.h>

#define NUM_LEDS 99

#define DATA_PIN 6

CRGB leds[NUM_LEDS];

int data;

void setup() {

    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

    FastLED.setBrightness(5);

    Serial.begin(9600);
}

void loop()
{
if(Serial.available() > 0)
{
data = Serial.read();
Serial.print(data);
Serial.print("\n");

if(data <= 1.0) {
for (int i = 0; i < 99; i++) {
  leds[i] = CRGB::Red;
}
FastLED.show();
}

else if(data <= 2.0) {            
for (int i = 0; i < 1; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 1; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 3.0) {            
for (int i = 0; i < 2; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 2; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 4.0) {            
for (int i = 0; i < 3; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 3; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 5.0) {            
for (int i = 0; i < 4; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 4; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 6.0) {            
for (int i = 0; i < 5; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 5; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 7.0) {            
for (int i = 0; i < 6; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 6; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 8.0) {            
for (int i = 0; i < 7; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 7; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 9.0) {            
for (int i = 0; i < 8; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 8; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 10.0) {            
for (int i = 0; i < 9; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 9; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 11.0) {            
for (int i = 0; i < 10; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 10; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();     
}

else if(data <= 12.0) {            
for (int i = 0; i < 11; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 11; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 13.0) {            
for (int i = 0; i < 12; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 12; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 14.0) {            
for (int i = 0; i < 13; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 13; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 15.0) {            
for (int i = 0; i < 14; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 14; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();     
}

else if(data <= 16.0) {            
for (int i = 0; i < 15; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 15; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 17.0) {            
for (int i = 0; i < 16; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 16; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 18.0) {            
for (int i = 0; i < 17; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 17; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 19.0) {            
for (int i = 0; i < 18; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 18; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 20.0) {            
for (int i = 0; i < 19; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 19; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 21.0) {            
for (int i = 0; i < 20; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 20; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 22.0) {            
for (int i = 0; i < 21; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 21; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 23.0) {            
for (int i = 0; i < 22; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 22; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 24.0) {            
for (int i = 0; i < 23; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 23; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 25.0) {            
for (int i = 0; i < 24; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 24; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 26.0) {            
for (int i = 0; i < 25; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 25; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 27.0) {            
for (int i = 0; i < 26; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 26; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 28.0) {            
for (int i = 0; i < 27; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 27; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 29.0) {            
for (int i = 0; i < 28; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 28; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 30.0) {            
for (int i = 0; i < 29; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 29; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();    
}

else if(data <= 31.0) {            
for (int i = 0; i < 30; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 30; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 32.0) {            
for (int i = 0; i < 31; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 31; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 33.0) {            
for (int i = 0; i < 32; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 32; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 34.0) {            
for (int i = 0; i < 33; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 33; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 35.0) {            
for (int i = 0; i < 34; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 34; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 36.0) {            
for (int i = 0; i < 35; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 35; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 37.0) {            
for (int i = 0; i < 36; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 36; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 38.0) {            
for (int i = 0; i < 37; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 37; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 39.0) {            
for (int i = 0; i < 38; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 38; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 40.0) {            
for (int i = 0; i < 39; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 39; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 41.0) {            
for (int i = 0; i < 40; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 40; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 42.0) {            
for (int i = 0; i < 41; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 41; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();    
}

else if(data <= 43.0) {            
for (int i = 0; i < 42; i++) {
  leds[i] = CRGB::Green;
}
  for (int i = 42; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 44.0) {            
for (int i = 0; i < 43; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 43; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 45.0) {            
for (int i = 0; i < 44; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 44; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 46.0) {            
for (int i = 0; i < 45; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 45; i < 99; i++) {
  leds[i] = CRGB::Red;
}
FastLED.show();       
}

else if(data <= 47.0) {            
for (int i = 0; i < 46; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 46; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 48.0) {            
for (int i = 0; i < 47; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 47; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();      
}

else if(data <= 49.0) {            
for (int i = 0; i < 48; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 48; i < 99; i++) {
  leds[i] = CRGB::Red;
}
FastLED.show();
}

else if(data <= 50.0) {            
for (int i = 0; i < 49; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 49; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 51.0) {            
for (int i = 0; i < 50; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 50; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 52.0) {            
for (int i = 0; i < 51; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 51; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 53.0) {            
for (int i = 0; i < 52; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 52; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show(); 
}

else if(data <= 54.0) {            
for (int i = 0; i < 53; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 53; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 55.0) {            
for (int i = 0; i < 54; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 54; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();     
}

else if(data <= 56.0) {            
for (int i = 0; i < 55; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 55; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 57.0) {            
for (int i = 0; i < 56; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 56; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 58.0) {            
for (int i = 0; i < 57; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 57; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 59.0) {            
for (int i = 0; i < 58; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 58; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 60.0) {            
for (int i = 0; i < 59; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 59; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 61.0) {            
for (int i = 0; i < 60; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 60; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 62.0) {            
for (int i = 0; i < 61; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 61; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 63.0) {            
for (int i = 0; i < 62; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 62; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 64.0) {            
for (int i = 0; i < 63; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 63; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 65.0) {            
for (int i = 0; i < 64; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 64; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();    
}

else if(data <= 66.0) {            
for (int i = 0; i < 65; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 65; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 67.0) {            
for (int i = 0; i < 66; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 66; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 68.0) {            
for (int i = 0; i < 67; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 67; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 69.0) {            
for (int i = 0; i < 68; i++) {
  leds[i] = CRGB::Green;
}
  for (int i = 68; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 70.0) {            
for (int i = 0; i < 69; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 69; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 71.0) {            
for (int i = 0; i < 70; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 70; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 72.0) {            
for (int i = 0; i < 71; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 71; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 73.0) {            
for (int i = 0; i < 72; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 72; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 74.0) {            
for (int i = 0; i < 73; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 73; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 75.0) {            
for (int i = 0; i < 74; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 74; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 76.0) {            
for (int i = 0; i < 75; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 75; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 77.0) {            
for (int i = 0; i < 76; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 76; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 78.0) {            
for (int i = 0; i < 77; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 77; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();       
}

else if(data <= 79.0) {            
for (int i = 0; i < 78; i++) {
  leds[i] = CRGB::Green;
}
  for (int i = 78; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 80.0) {            
for (int i = 0; i < 79; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 79; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();  
}

else if(data <= 81.0) {            
for (int i = 0; i < 80; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 80; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 82.0) {            
for (int i = 0; i < 81; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 81; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();   
}

else if(data <= 83.0) {            
for (int i = 0; i < 82; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 82; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 84.0) {            
for (int i = 0; i < 83; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 83; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 85.0) {            
for (int i = 0; i < 84; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 84; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 86.0) {            
for (int i = 0; i < 85; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 85; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 87.0) {            
for (int i = 0; i < 86; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 86; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();     
}

else if(data <= 88.0) {            
for (int i = 0; i < 87; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 87; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 89.0) {            
for (int i = 0; i < 88; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 88; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 90.0) {            
for (int i = 0; i < 89; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 89; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 91.0) {            
for (int i = 0; i < 90; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 90; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 92.0) {            
for (int i = 0; i < 91; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 91; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 93.0) {            
for (int i = 0; i < 92; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 92; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();      
}

else if(data <= 94.0) {            
for (int i = 0; i < 93; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 93; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 95.0) {            
for (int i = 0; i < 94; i++) {
  leds[i] = CRGB::Green; 
}
  for (int i = 94; i < 99; i++) {
  leds[i] = CRGB::Red; 
}
FastLED.show();      
}

else if(data <= 96.0) {            
for (int i = 0; i < 95; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 95; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 97.0) {            
for (int i = 0; i < 96; i++) {
  leds[i] = CRGB::Green;  
}
  for (int i = 96; i < 99; i++) {
  leds[i] = CRGB::Red;  
}
FastLED.show();       
}

else if(data <= 98.0) {            
for (int i = 0; i < 97; i++) {
  leds[i] = CRGB::Green;
}
  for (int i = 97; i < 99; i++) {
  leds[i] = CRGB::Red;
}
FastLED.show();
}

else if(data <= 99.0) {            
for (int i = 0; i < 98; i++) {
  leds[i] = CRGB::Green;
}
  for (int i = 98; i < 99; i++) {
  leds[i] = CRGB::Red;
}
FastLED.show();
}

else if(data <= 100.0) {            
for (int i = 0; i < 99; i++) {
  leds[i] = CRGB::Green;
}
FastLED.show();
}

else if(data <= 101.0) {            
for (int i = 0; i < 99; i++) {
  leds[i] = CRGB::Black;
}
FastLED.show();
}
}
}
