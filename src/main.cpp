#include <Arduino.h>
#include <Gldr.h>


#define STANDART_BAUDRATE 9600


using namespace gldr;


auto joystick = JoystickReceiver();
auto remote   = RemoteReceiver(2, 3, joystick); 


void setup()
{
    Serial.begin(STANDART_BAUDRATE);
}


void loop()
{
    remote.update();
    Serial.print("Y-Axis: ");
    Serial.println(joystick.getY());
}
