#include <Servo.h>
// SERVOS //
Servo mtsrv1;
Servo mtsrv2;
Servo mtsrv3;
int servo1 = 9;
int servo2 = 8;
int servo3 = 10;
// ====== //
// BOTAO //
int botao = 3;
// VARIAVEIS //
int angulo = 0;
int tempo = 600;
//          //

void setup()
{
  pinMode(botao, INPUT_PULLUP); // define o botão como saidas
  mtsrv1.attach(servo1,450,3000);
  mtsrv2.attach(servo2,450,3000);
  mtsrv3.attach(servo3,450,3000);

}

void loop()
{
  if (digitalRead(botao) == LOW)
  {
    for (int angulo = 0 ; angulo <= 25; angulo++) // Aumenta o angulo do servo ate chegar em 180 graus
    {
      mtsrv1.write(angulo);
      mtsrv2.write(angulo);
      mtsrv3.write(angulo);
      delay(800);
    }
    {
      delay(tempo);
    }

    for (int angulo = 25; angulo >= 0; angulo--) // Diminui o angulo do servo
    {
      mtsrv1.write(angulo);
      mtsrv2.write(angulo);
      mtsrv3.write(angulo);
      delay(800);
    }
  }
  // servo1.detach();
  // servo2.detach();
  // servo3.detach();
}
