#include <LTC2944.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> 
#endif

#define LED_PIN    4
#define LED_COUNT 60

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

const unsigned int fullCapacity = 20000;
LTC2944 gauge(50);

void setup()
{
  
  Serial.begin(9600);
  Wire.begin();

  while (gauge.begin() == false) {
    Serial.println("XXX");
    delay(5000);
  }

  gauge.setBatteryCapacity(fullCapacity);
  gauge.setBatteryToFull(); // Sets accumulated charge registers to the maximum value
  gauge.setADCMode(ADC_MODE_SLEEP); // In sleep mode, volta ge and temperature measurements will only take place when requested
  gauge.startMeasurement();

  strip.setPixelColor(0, 0, 255, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 0, 255, 0);
  strip.setPixelColor(3, 0, 255, 0);
  strip.setPixelColor(4, 0, 255, 0);
  strip.setPixelColor(5, 0, 255, 0);
  strip.setPixelColor(6, 0, 255, 0);
  strip.setPixelColor(7, 0, 255, 0);
  
  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
    clock_prescale_set(clock_div_1);
  #endif
    strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
    strip.show();            // Turn OFF all pixels ASAP
    strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
  

}

void loop() {
  unsigned int raw = gauge.getRawAccumulatedCharge();
  Serial.print(F("Raw Accumulated Charge: "));
  Serial.println(raw, DEC);

  float capacity = gauge.getRemainingCapacity();
  Serial.print(F("Battery Capacity: "));
  Serial.print(capacity, 3);
  Serial.print(F(" / "));
  Serial.print(fullCapacity, DEC);
  Serial.println(F(" mAh"));

  float voltage = gauge.getVoltage();
  Serial.print(F("Voltage: "));
  Serial.print(voltage, 3);
  Serial.println(F(" V"));

  float temperature = gauge.getTemperature();
  Serial.print(F("Temperature: "));
  Serial.print(temperature, 2);
  Serial.println(F(" 'C"));

  Serial.println();
  
  strip.setPixelColor(0, 0, 255, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 0, 255, 0);
  strip.setPixelColor(3, 0, 255, 0);
  strip.setPixelColor(4, 0, 255, 0);
  strip.setPixelColor(5, 0, 255, 0);
  strip.setPixelColor(6, 0, 255, 0);
  strip.setPixelColor(7, 0, 255, 0);
  
  if(capacity >= 0)
  {
    for(int n = -1 ; capacity <= 20000-(n+1)*2500 ;n++)
    {
      strip.setPixelColor(n, 0, 0, 0);
    } 
  }
  else 
  {
    strip.setPixelColor(0, 255, 0, 255);
    strip.setPixelColor(1, 255, 0, 255);
    strip.setPixelColor(2, 255, 0, 255);
    strip.setPixelColor(3, 255, 0, 255);
    strip.setPixelColor(4, 255, 0, 255);
    strip.setPixelColor(5, 255, 0, 255);
    strip.setPixelColor(6, 255, 0, 255);
    strip.setPixelColor(7, 255, 0, 255);
    delay(1000);
  }

  if(temperature >= 20 && temperature <= 80){}
  else 
  {
      strip.setPixelColor(0, 255, 0, 0);
      strip.setPixelColor(1, 255, 0, 0);
      strip.setPixelColor(2, 255, 0, 0);
      strip.setPixelColor(3, 255, 0, 0);
      strip.setPixelColor(4, 255, 0, 0);
      strip.setPixelColor(5, 255, 0, 0);
      strip.setPixelColor(6, 255, 0, 0);
      strip.setPixelColor(7, 255, 0, 0);
      delay(1000);
  }
  
  strip.show();
  delay(500);
}
