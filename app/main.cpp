#include <iostream>
#include "AnalogSensor.hpp"

int main()
{
    //valgrind track mentions an unintialised value here
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    // here bool terminator was unintialised
    bool terminator = false;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
