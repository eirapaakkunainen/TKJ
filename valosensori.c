#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float valoisuus(uint16_t rekisteri);

float valoisuus(uint16_t rekisteri){
    float e;
    float lux;
    int maski = 0b1111000000000000;
    e = (rekisteri & maski) >> 12;
    rekisteri = rekisteri & ~(maski);
    lux = 0.01*pow(2,e)*(float)rekisteri;
    return lux;
}
