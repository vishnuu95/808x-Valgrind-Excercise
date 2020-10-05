/** Copyright 2020 Vishnuu A D 
 * @file AnalogSensor.cpp
 * @brief Implementation of AnalogSensor Class attributes and methods.
 * 
*/
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

/** 
 * @brief Class constructor.
 * @param samples is an unsigned integer.
 * @return None
*/
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

/** @brief Destructor for the AnalaogSensor Class
 * @param None
 * @return None
*/
AnalogSensor::~AnalogSensor() {
}

/** @brief Read method for the analog sensor class
 * @param None
 * @return result - int value of the result being returned.
*/
int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(),
                 0.0) / readings->size();
    delete readings;
    return result;
}
