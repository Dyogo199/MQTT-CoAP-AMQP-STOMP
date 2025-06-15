#include <stdlib.h>
#include "pico/stdlib.h"

// Inicialize o aleatório em algum momento no início do seu main!
void inicializar_aleatorio(void) {
    srand((unsigned int)to_us_since_boot(get_absolute_time()));
}

int numero_aleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}
