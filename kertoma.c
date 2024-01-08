#include <stdio.h>
#include <inttypes.h>

int64_t laske_kertoma(int8_t n);

int64_t laske_kertoma(int8_t n){
    int64_t kertoma = 1;
    int i = n;
    if (n > 20) {
        return (-1);
    } else {
        while(i != 1) {
            kertoma *= n;
            n = n - 1;
            i--;
        }
    return kertoma;
    }
}
