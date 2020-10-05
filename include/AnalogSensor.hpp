/** Copyright 2020 Vishnuu A D
 *  @file AnalogSensor.hpp which has the definition for the AnalogSensor class.
*/
#pragma once

#include <iostream>

/**
 * @brief Class definition 
*/
class AnalogSensor {
 public:
    /**
     * @brief Constructor
     * @param samples unsigned int which stores number of samples to be read.
     * @return None
    */
    explicit AnalogSensor(unsigned int samples);
    /**
     * @brief Destructor
     * @param None
     * @return None
    */
    ~AnalogSensor();
    /**
     * @brief Read method of the class
     * @param None
     * @return int value
    */
    int Read();

 private:
    unsigned int mSamples;
};
