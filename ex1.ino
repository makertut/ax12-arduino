#include <AX12A.h>

#define DirectionPin  (10u)
#define BaudRate    (1000000ul)
#define ID    (1u)

void setup()
{
 ax12a.begin(BaudRate, DirectionPin, &Serial);
 ax12a.setEndless(ID, ON);
 
}

void loop()
{
    ax12a.ledStatus(ID, ON);
    ax12a.turn(ID, LEFT, 100);
    delay(5000);
  
    ax12a.ledStatus(ID, OFF);
    ax12a.turn(ID, RIGHT, 500);
    delay(5000);
}
