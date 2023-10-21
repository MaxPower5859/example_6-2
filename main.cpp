/* 
El display esta en paralelo.
Los pines van de D0 a D7 y luego Rs = D8 y En = D9
display_t tiene el tipo de conexion DISPLAY_CONNECTION_GPIO_8BITS

FUNCIONES
La funcion void displayInit(displayConnection_t connection );
es llamada por void userInterfaceInit(), llamada por smartHomeSystemInit();

La funcionvoid displayCharPositionWrite(uint8_t charPositionX, uint8_t charPositionY );
es llamada por  void userInterfaceDisplayInit() antes de usar displayStringWrite()

La funcionvoid displayStringWrite(const char * str );es llamada por void userInterfaceDisplayInit 
 */

//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}