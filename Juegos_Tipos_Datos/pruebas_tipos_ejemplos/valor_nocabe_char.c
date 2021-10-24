#include <stdio.h>

int main(void){
        char char_fuera_rango = 300;
        
        char doble_fuera_rango = 65541;
        
        printf("300 almacenado en un char = %d\n", char_fuera_rango);
        printf("65541 almacenado en un char = %i\n", doble_fuera_rango);
        
        return 0;       
}
