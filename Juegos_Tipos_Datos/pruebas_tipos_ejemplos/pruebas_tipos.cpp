#include <iostream>
#include <cmath>

int main(void){

        //300 se sale del valor máximo representable por un char (2^8 = 256)
        char char_desbordado = 300;

        //2^31 + 1 se sale del rango positivo representable, > 2^31
        int pos_neg = 2147483648 + 1;

        //Aunque se guarde su valor en una variable sin signo, la representación en memoria utilizará signo
        unsigned false_neg = -5;
        
        //Este número, 2^32, no cabe en un int
        int num_grande = 4294967296;
        
        //El valor resultante se sale del rango representable por un int (2^32 - 1) 
        long unsigned int_fuera_rango = pow(2, 32) + 6;
        int valor_desbordado = int_fuera_rango;

        long long long_fuera_rango = 340282366920938463463374607431768211456 + 6;

        //Saldrá el valor 44 = 300 - 256
        std::cout<<"300 almacenado en un char = "<<+char_desbordado<<std::endl;

        //Saldrá el valor 0
        std::cout<< "2^32 almacenado en un int = " << num_grande << std::endl;

        //Saldra el valor -2147483647 = (2^32) - (2147483648 + 1)
        std::cout<<"2^31 + 1 almacenado en un int = " << pos_neg << std::endl;
        
        /*
         * Saldrá el valor 4294967291 = (2^32) - 5 , 
         * correspondiente a la interpretación positiva del valor almacenado en memoria 
         */
        std::cout<<"-5 almacenado en un unsigned = " << false_neg << std::endl;

        //Mostrará el valor 6, debido a que, al desbordar el valor, empieza a escribir desde el principio del registro
        std::cout<<"2^32 + 6 almacenado como long = "<< int_fuera_rango << std::endl;
        std::cout<<"2^32 + 6 almacenado en un int = " << valor_desbordado <<std::endl;

        //Mostrará el valor 6, debido a que el valor desborda 2 veces, quedando el 6 como valor resultante
        std::cout<<"2^128 + 6 almacenado en un long long = " << long_fuera_rango << std::endl;

        return 0;

}
