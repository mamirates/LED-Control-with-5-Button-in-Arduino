#define button1 3
#define button2 4
#define button3 5
#define button4 6
#define button5 7
#define led1 8
#define led2 9
#define led3 10
//
int db1,db2,db3,db4,db5;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
}

void loop()
{
  // Butonları giriş oldukları için arduinoya okutmamız lazım.
  db1 = digitalRead(button1);
  db2 = digitalRead(button2);
  db3 = digitalRead(button3);
  db4 = digitalRead(button4);
  db5 = digitalRead(button5);
  
  if (db1 == HIGH)
    digitalWrite(led1,HIGH);
  else if (db2 == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
  else if (db3 == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  else if (db4 == HIGH){
    digitalWrite(led1 , HIGH);  //ledler sırasi ise yanıp sönecekler
    delay(250);
    digitalWrite(led1 ,  LOW);
    digitalWrite(led2 , HIGH);
    delay(250);
    digitalWrite(led2 ,  LOW);
    digitalWrite(led3 , HIGH);
    delay(250);
    digitalWrite(led3 ,  LOW);
  }
  else if (db5 == HIGH){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    delay(250);
    digitalWrite(led1 , LOW);
    digitalWrite(led2 , LOW);
    digitalWrite(led3 , LOW);
    delay(250);
  }
  else{
    digitalWrite(led1 , LOW);
    digitalWrite(led2 , LOW);
    digitalWrite(led3 , LOW);
  }  
}
