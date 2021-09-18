#include <SD.h>
#include <SPI.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

/* MOSI - pin 51
 ** MISO - pin 50
 ** SCK - pin 52
 ** CS - pin 4 */

const int chipSelect = 53;

/*int soPin = 4;// SO=Serial Out
int csPin = 5;// CS = chip select CS pin
int sckPin = 6;// SCK = Serial Clock pin*/

LiquidCrystal_I2C lcd(0x27, 20, 4);

// Data wire is plugged into digital pin 2 on the Arduino
OneWire oneWireA (2) ;
OneWire oneWireB (3) ;

// Setup a oneWire instance to communicate with any OneWire device
//OneWire oneWire(ONE_WIRE_BUS);  

// Pass oneWire reference to DallasTemperature library
DallasTemperature sensorsA (&oneWireA) ;
DallasTemperature sensorsB (&oneWireB) ;

// Addresses of 2 DS18B20s
uint8_t sensor1[8] = { 0x28, 0xF2, 0x00, 0x07, 0xD6, 0x01, 0x3C, 0x95 };
uint8_t sensor2[8] = { 0x28, 0x35, 0xAB, 0x07, 0xD6, 0x01, 0x3C, 0xCC };
uint8_t sensor3[8] = { 0x28, 0xE4, 0xB9, 0x07, 0xD6, 0x01, 0x3C, 0xC0 };
uint8_t sensor4[8] = { 0x28, 0xD8, 0xAD, 0x07, 0xD6, 0x01, 0x3C, 0x33 };
uint8_t sensor5[8] = { 0x28, 0xEA, 0x16, 0x07, 0xD6, 0x01, 0x3C, 0x8F };
uint8_t sensor6[8] = { 0x28, 0xDC, 0x5A, 0x07, 0xD6, 0x01, 0x3C, 0x18 };
uint8_t sensor7[8] = { 0x28, 0x3F, 0xBD, 0x07, 0xD6, 0x01, 0x3C, 0xE3 };
uint8_t sensor8[8] = { 0x28, 0xC9, 0x58, 0x07, 0xD6, 0x01, 0x3C, 0x2B };
uint8_t sensor9[8] = { 0x28, 0x47, 0x30, 0x07, 0xD6, 0x01, 0x3C, 0xFD };
uint8_t sensor10[8] ={ 0x28, 0xC4, 0x2B, 0x07, 0xD6, 0x01, 0x3C, 0x42 };
uint8_t sensor11[8] ={ 0x28, 0x84, 0x2C, 0x07, 0xD6, 0x01, 0x3C, 0x66 };
uint8_t sensor12[8] ={ 0x28, 0xBE, 0x5A, 0x07, 0xD6, 0x01, 0x3C, 0xB5 };
uint8_t sensor13[8] ={ 0x28, 0xC4, 0x29, 0x07, 0xD6, 0x01, 0x3C, 0xC1 };
uint8_t sensor14[8] ={ 0x28, 0x73, 0x31, 0x07, 0xD6, 0x01, 0x3C, 0x01 };
uint8_t sensor15[8] ={ 0x28, 0xA8, 0xFB, 0x07, 0xD6, 0x01, 0x3C, 0xA2 };
uint8_t sensor16[8] ={ 0x28, 0x27, 0xDC, 0x07, 0xD6, 0x01, 0x3C, 0xC5 };


File myFile;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);



  //----------------------------------------------Initializing Micro SD Card
  Serial.println("Initializing Micro SD Card...");
  delay(100);

  if (!SD.begin(chipSelect)) {
    Serial.println("Initialization failed!");
    while (1);
  }

  Serial.println("Successfully Initializing Micro SD Card");
  Serial.println();
  delay(100);

  sensorsA.begin();
  sensorsB.begin(); 
  lcd.begin();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  
   sensorsA.requestTemperatures();
  sensorsB.requestTemperatures();

   float tempC1 = sensorsA.getTempC(sensor1);
      
      lcd.setCursor(0, 0);
      lcd.print("SENSOR1: ");
      lcd.print(tempC1);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR1: ");
      Serial.println(tempC1);


    float tempC2 = sensorsA.getTempC(sensor2);
      
      lcd.setCursor(0, 1);
      lcd.print("SENSOR2: ");
      lcd.print(tempC2);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR2: ");
      Serial.println(tempC2);  


      float tempC3 = sensorsA.getTempC(sensor3);
      
      lcd.setCursor(0, 2);
      lcd.print("SENSOR3: ");
      lcd.print(tempC3);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR3: ");
      Serial.println(tempC3);  

       float tempC4 = sensorsA.getTempC(sensor4);
      
      lcd.setCursor(0, 3);
      lcd.print("SENSOR4: ");
      lcd.print(tempC4);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR4: ");
      Serial.println(tempC4);

  delay(2000);
  lcd.clear();


float tempC5 = sensorsA.getTempC(sensor5);
      
      lcd.setCursor(0, 0);
      lcd.print("SENSOR5: ");
      lcd.print(tempC5);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR5: ");
      Serial.println(tempC5);

float tempC6 = sensorsA.getTempC(sensor6);
      
      lcd.setCursor(0, 1);
      lcd.print("SENSOR6: ");
      lcd.print(tempC6);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR6: ");
      Serial.println(tempC6);

float tempC7 = sensorsA.getTempC(sensor7);
      
      lcd.setCursor(0, 2);
      lcd.print("SENSOR7: ");
      lcd.print(tempC7);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR7: ");
      Serial.println(tempC7);

float tempC8 = sensorsA.getTempC(sensor8);
      
      lcd.setCursor(0, 3);
      lcd.print("SENSOR8: ");
      lcd.print(tempC8);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR8: ");
      Serial.println(tempC8);
      
    delay (2000);
    lcd.clear();  

float tempC9 = sensorsB.getTempC(sensor9);
      
      lcd.setCursor(0, 0);
      lcd.print("SENSOR9: ");
      lcd.print(tempC9);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR9: ");
      Serial.println(tempC9);

float tempC10 = sensorsB.getTempC(sensor10);
      
      lcd.setCursor(0, 1);
      lcd.print("SENSOR10: ");
      lcd.print(tempC10);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR10: ");
      Serial.println(tempC10);

float tempC11 = sensorsB.getTempC(sensor11);
      
      lcd.setCursor(0, 2);
      lcd.print("SENSOR11: ");
      lcd.print(tempC11);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR11: ");
      Serial.println(tempC11);

float tempC12 = sensorsB.getTempC(sensor12);
      
      lcd.setCursor(0, 3);
      lcd.print("SENSOR12: ");
      lcd.print(tempC12);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR12: ");
      Serial.println(tempC12);

    delay (2000);
    lcd.clear();
    

float tempC13 = sensorsB.getTempC(sensor13);
      
      lcd.setCursor(0, 0);
      lcd.print("SENSOR13: ");
      lcd.print(tempC13);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR13: ");
      Serial.println(tempC13);

float tempC14 = sensorsB.getTempC(sensor14);
      
      lcd.setCursor(0, 1);
      lcd.print("SENSOR14: ");
      lcd.print(tempC14);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR14: ");
      Serial.println(tempC14);

float tempC15 = sensorsB.getTempC(sensor15);
      
      lcd.setCursor(0, 2);
      lcd.print("SENSOR15: ");
      lcd.print(tempC15);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR15: ");
      Serial.println(tempC15);   

float tempC16 = sensorsB.getTempC(sensor16);
      
      lcd.setCursor(0, 3);
      lcd.print("SENSOR16: ");
      lcd.print(tempC16);
      lcd.print((char)223);
      lcd.print("C");
      Serial.print("SENSOR16: ");
      Serial.println(tempC16);   

    delay (2000);
    lcd.clear();
//  __________________________________________________Write to Micro SD Card
      //----------------------------------------------Opening files that have been specified on the Micro SD Card
      // open the file. note that only one file can be open at a time,
      // so you have to close this one before opening another.
      myFile = SD.open("DS18B20.txt", FILE_WRITE);
      //----------------------------------------------
    
      //----------------------------------------------Writing Data to the specified file on the Micro SD Card
      // if the file opened okay, write to it:
      if (myFile) {
        Serial.println("Writing value");
        
        //----------------------------------------------Writing Date Data to Micro SD Card myFile.print(","); //--> Write the delimiter between the data in the form of a comma character to the Micro SD Card
        
        myFile.print(" Sensor1: "); //--> Writing Temperature Data to Micro SD Card
        myFile.print(tempC1);
        myFile.print(","); //--> Write the delimiter between the data in the form of a comma character to the Micro SD Card
    
        myFile.print(" Sensor2: "); //--> Writing Humidity Data to Micro SD Card
        myFile.print(tempC2);
        myFile.print(",");

        myFile.print(" Sensor3: ");
        myFile.print(tempC3);
        myFile.print(",");

        myFile.print(" Sensor4: ");
        myFile.print(tempC4);
        myFile.print(",");

        myFile.print(" Sensor5: ");
        myFile.print(tempC5);
        myFile.print(",");

        myFile.print(" Sensor6: ");
        myFile.print(tempC6);
        myFile.print(",");

        myFile.print(" Sensor7: ");
        myFile.print(tempC7);
        myFile.print(",");

        myFile.print(" Sensor8: ");
        myFile.print(tempC8);
        myFile.print(",");

        myFile.print(" Sensor9: ");
        myFile.print(tempC9);
        myFile.print(",");


        myFile.print(" Sensor10: ");
        myFile.print(tempC10);
        myFile.print(",");


        myFile.print(" Sensor11: ");
        myFile.print(tempC11);
        myFile.print(",");


        myFile.print(" Sensor12: ");
        myFile.print(tempC12);
        myFile.print(",");



        myFile.print(" Sensor13: ");
        myFile.print(tempC13);
        myFile.print(",");

        myFile.print(" Sensor14: ");
        myFile.print(tempC14);
        myFile.print(",");

        myFile.print(" Sensor15: ");
        myFile.print(tempC15);
        myFile.print(",");

        myFile.print(" Sensor16: ");
        myFile.print(tempC16);
        myFile.print(",");

        myFile.println("");

        
        myFile.close(); //--> close the file
        
        Serial.println("Successfully writing Data to Micro SD Card");
        Serial.println("----");
        Serial.println();
      } else {      
        Serial.println("Error opening DS18B20.txt"); 
        lcd.clear();
        lcd.print("WIRE KHULE LAGAN");
      }

      
    delay (60000);
    }
  
