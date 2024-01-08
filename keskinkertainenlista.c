#include <string.h>
#include <stdio.h>
#include <stdlib.h>

float keskiarvo(char *lista);
//char str[] = "114,126,31,115,86,-97,63,-126";

float keskiarvo(char *lista) {
    float summa = 0;
    int jakaja = 0;

    const char sep[] = ",";
    lista = strtok(lista, sep);

    while(lista != NULL){
        jakaja += 1;
        int arvo = atol(lista);
        summa += arvo;

    lista = strtok(NULL, sep);
    }
    return summa/jakaja;
}

/*int main(){
    printf("%f\n", keskiarvo(str));
    printf("%d\n", jakaja);
    printf("%f\n", summa);
    printf("%f", keskiarvo(str));
}*/


