/** Copyright 2020 Vishnuu A D 
 * @file main.cpp is the main file that has a demo of the Analog Sensor Class working.
*/

#include <iostream>
#include <AnalogSensor.hpp>

/** 
 * @brief main function to demonstrate working of AnalogSensor Class
 * @param None
 * @return None
*/
int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
