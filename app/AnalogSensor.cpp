//Changed <> to "" for loading .hpp file 
#include "AnalogSensor.hpp"

#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    //valgrind leak says- memory leak since the new file is created and not hashed after execution

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
    //We detele the new vector after executiin to prevent memory leak
    delete(readings);
    return result;
}


