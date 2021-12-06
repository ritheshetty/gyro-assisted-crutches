#include <MPU6050_tockn.h>
#include <Wire.h>
#include<SoftwareSerial.h>


const int opin=9;
//const int ledp=13;
//const int KNOCK=A0;
//MPU6050 mpu6050(Wire);
const int led=10;
SoftwareSerial bt(1,2);

long timer = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  //mpu6050.begin();
  //mpu6050.calcGyroOffsets(true);
  pinMode(opin,OUTPUT);
  pinMode(led,OUTPUT);
  //pinMode(ledp,OUTPUT);
  bt.begin(9600);
  Serial.begin(9600);
}

void loop() {
 // mpu6050.update();
  /*int value=1000*analogRead(KNOCK);
  if(value>30)
  {
    digitalWrite(led,HIGH);   
     Serial.println("LED ON");  
  }
  else
  {
    digitalWrite(led,LOW);
 
  }
    delay(100);*/
    
  if(millis() - timer > 1000){
 //float   accx= mpu6050.getAccX()/0.102;
 //float   accy = mpu6050.getAccY()/0.102;
 //float angx = mpu6050.getAngleX();
 //float angy = mpu6050.getAngleY();
    Serial.print("accX : ");Serial.print("1");
    //Serial.print("accY : ");Serial.print(abs(mpu6050.getAccY()/0.102));
    //Serial.print("accZ : ");Serial.println(abs(mpu6050.getAccZ()/0.102));
    Serial.println("========================================");
  }
  
    //Serial.print("gyroX : ");Serial.print(mpu6050.getGyroX());
    //Serial.print("  gyroY : ");Serial.print(mpu6050.getGyroY());
    //Serial.print("  gyroZ : ");Serial.println(mpu6050.getGyroZ());
  
    //Serial.print("accAngleX : ");Serial.print(mpu6050.getAccAngleX());
    //Serial.print("  accAngleY : ");Serial.println(mpu6050.getAccAngleY());
  
    //Serial.print("gyroAngleX : ");Serial.print(mpu6050.getGyroAngleX());
    //Serial.print("  gyroAngleY : ");Serial.print(mpu6050.getGyroAngleY());
    //Serial.print("  gyroAngleZ : ");Serial.println(mpu6050.getGyroAngleZ());
    
    //Serial.println("angleX : ");Serial.println(mpu6050.getAngleX());
    //Serial.println("angleY:  ");Serial.println(mpu6050.getAngleY());
    //Serial.println("angleZ:  ");Serial.println(mpu6050.getAngleZ());
    /*Serial.println("======================================");
    if((mpu6050.getAngleX()>78)&&(mpu6050.getAngleX()<81))
        {
          digitalWrite(opin,HIGH);
        }
    if((mpu6050.getAngleX()<78)||(mpu6050.getAngleX()>81))
      {
        digitalWrite(opin,LOW);
      }
    long t1, t2;
    int flag= 0;
   if(abs(accx)>2&&abs(accy)<5)
    {
    t1 = millis();
    while((angx>0&&abs(angx)<20) || abs(angx) > 140)
    {
      t2 = millis();
      if((t2-t1)==3000)
      {
        flag  = 1;
        Serial.println(flag);
        digitalWrite(led,HIGH);
        break;
     
      }
      
      /*else
      {
        digitalWrite(led,LOW);
      }*/
    
  
  //digitalWrite(led,LOW);
  /*if (flag == true)
      {
           if(bt.available())
           {
              Serial.write(bt.read());  
           }
      }*/

    //Serial.print("  angleY : ");Serial.print(mpu6050.getAngleY());
    //Serial.print("  angleZ : ");Serial.println(mpu6050.getAngleZ());
    //timer = millis();
    
  
}
 

 
