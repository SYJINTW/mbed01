#include "mbed.h"

void Led(DigitalOut &ledpin, int t)
{
    for(int i = 0; i < t; i++)
    {
        ledpin.write(1);
        ThisThread::sleep_for(500ms);
        ledpin.write(0);
        ThisThread::sleep_for(500ms);
    }
}
