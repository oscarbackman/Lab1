#include <stdio.h>
#include <ctype.h>





    int main (void)
        //Huvudfunktion, Bestämmer om använder har skrivot in ett korrekt värde.

    {


        //DEFINERA INTE DOBULE HÄR! För då fungerar inte size/size..
        int a;        //extra karkaktärer från dåligt input     
        int size;
        printf("Type size: A");
        scanf("%i%c",&size, &a); 
        printf("size: %i\n",size); 
        printf("a-värdet(asiii): %d\n",a); //asiii-värdet

        if (a ==10){    //asiii koden för enter
            size_matters(size);}
        else 
                printf("Felskrivet: Endast siffror tillåtet inom intervall 0-1000:");
                //Ha if size<0 size>1000 här istället(?)
                //If else är konstigt def...

        return 0;
    }






        int size_matters(int size){
            //Funktionen som beräknar och printar ut storeken på sökt Ax papper 

            printf("Welcome to somethingFunction, the size is: %i\n",size);
            
            double  x_dim = 210, y_dim = 297;
            int i;

            if (size < 0 || size > 1000) //decimaltal (punkt) & andra bokstäver
            printf("Not a valid paper size\n");
        else {
            if (size == 4){}
            else if (size < 4) {
                for (i = 1 ; i <= 4-size; ++i )
                { if (i % 2 == 0) //If i is even --> divide x_dim
                    x_dim *= 2;
                else
                    y_dim *= 2; // If i is odd --> divide y_dim
                    }}
            else
                for (i = 1; i <= size - 4; ++i) // funktion
                { if (i % 2 == 0)
                    x_dim /=2;
                else
                    y_dim /=2;
                }
            printf("A paper of size A%i is %g x %g mm.",size, x_dim, y_dim);

        }}


