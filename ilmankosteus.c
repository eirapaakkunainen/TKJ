#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float kosteus(uint16_t rekisteri);

float kosteus(uint16_t rekisteri){
    float kosteus = 0;
    kosteus = rekisteri / pow(2,16)*100;
    return kosteus;
}
