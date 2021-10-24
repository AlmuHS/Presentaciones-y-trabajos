#include <stdio.h>

int main(void){

        //Aunque se guarde su valor en una variable sin signo, la representación en memoria utilizará signo
        unsigned false_neg = -5;
        
        printf("-5 almacenado en un unsigned = %u\n", false_neg);

        return 0;
}


