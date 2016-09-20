#include <stdio.h>
#include <ctype.h>
    
    int size_matters(int size){
        //Funktionen som beräknar och printar ut storeken på sökt Ax papper 
        
        printf("Welcome to somethingFunction, the size is: %i\n",size);
    double  x_dim = 210, y_dim = 297;
        int i;
        
        if (size < 0 || size > 1000) //decimaltal (punkt) & andra bokstäver
		printf("Not a valid paper size");
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



int main (void)
    //Huvudfunktion, Bestämmer om använder har skrivot in ett korrekt värde.
    
{
    
    int i; //ingen funktion(?)

    //DEFINERA INTE DOBULE HÄR! För då fungerar inte value/size..
    int a;
    int value;
    printf("Type something: A");
    scanf("%i%c",&value, &a);
    printf("value: %i\n",value);
    printf("a-värdet: %d\n",a);

    if (a ==10){
        printf("suo\n");
        size_matters(value);}
    else 
            printf("aa fast nä...skriv rätt så kanske jag försöker hjälpa till\n");

    return 0;
}
