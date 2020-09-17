/* Año bisiesto */

#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int year;
    
      setlocale(LC_ALL,"spanish");

    printf( "\n   Introduzca el año (deben ser 4 dígitos): ");
    scanf( "%d", &year );
    
    // no tiene caso evaluar si es decimal, porque el entero sólo toma la parte entera del número que se introduce
    
    	if ( year>=10000 || year != (int)year) 
    	{
	 printf( "\n ERROR haz introducido un año que excede 4 dígitos o has introducido decimales");
	 
	 return 0;
	}

    if ( year % 4 == 0)
    {
        printf( "\n   ES BISIESTO");
	}
    else
    {
        printf( "\n   NO ES BISIESTO" );
		}
	
   

    getch(); 

    return 0;
}
