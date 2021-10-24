#include <stdio.h>
#include <math.h>

int main(void){
        //2^31 + 1 se sale del rango positivo representable, > 2^31
        int pos_neg = 2147483648 + 20;

        //Aunque se guarde su valor en una variable sin signo, la representación en memoria utilizará signo
        unsigned false_neg = -5;
        
        //Este número, 2^32, no cabe en un int
        int num_grande = 4294967296;
        
        //El valor resultante se sale del rango representable por un int (2^32 - 1) 
        long unsigned int_fuera_rango = pow(2, 32) + 6;
        int valor_desbordado = int_fuera_rango;

        //Este valor se sale de cualquier rango representable
        long long_fuera_rango_signed = 179769313486231590772930519078902473361797697894230657273430081157732675805500963132708477322407536021120113879871393357658789768814416622492847430639474124377767893424865485276302219601246094119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137216 + 5; //pow(2, 1024);
  
        int valor;
        char resultado;
        printf("Introduce un valor: ");
        scanf("%d", &valor);
        
        int i = 0;
        for(i = 0; i < valor; i++);
        
        resultado = i;
        
        printf("El valor de resultado es %d\n", resultado);
        //long long_fuera_rango_signed = pow(2, 1024);

        printf("2^32 almacenado en un int = %d\n", num_grande);

        //Saldra el valor -2147483647 = (2^32) - (2147483648 + 1)
        printf("2^31 + 20 almacenado en un int = %d\n", pos_neg);
        
        //Saldrá el valor positivo correspondiente
        printf("2^31 + 1 almacenado en un unsigned = %u\n", pos_neg);
        
        /*
         * Saldrá el valor 4294967291 = (2^32) - 5 , 
         * correspondiente a la interpretación positiva del valor almacenado en memoria 
         */
        printf("-5 almacenado en un unsigned = %u\n", false_neg);

        //Mostrará el valor 6, debido a que, al desbordar el valor, aplica un módulo al 2^32 (32 es el número de bits de dicho tipo de dato)
        printf("2^32 + 6 representado como int = %u\n", int_fuera_rango);
        printf("2^32 + 6 almacenado en un int = %u\n", valor_desbordado);
        
        //Mostrará el valor real almacenado en el long
        printf("2^32 + 6 representado como long = %lu\n", int_fuera_rango);
        
        //Mostrará el valor 5, al aplicarse un módulo 2^64
        printf("2^1024 representado como long con signo = %ld\n", long_fuera_rango_signed);


        return 0;

}
