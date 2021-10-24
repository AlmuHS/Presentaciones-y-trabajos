#include <stdio.h>
#include <math.h>

int main(void){
        //2^31 + 20 se sale del rango positivo representable, > 2^31
        int pos_neg = 2147483648 + 20;

        //Saldrá un valor negativo
        printf("2^31 + 20 almacenado en un int = %d\n", pos_neg);
        
        //Saldrá el valor positivo correspondiente
        printf("2^31 + 20 almacenado en un unsigned = %u\n", pos_neg);

        return 0;

}


