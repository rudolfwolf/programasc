/* A�o bisiesto */

#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int year;
    
      setlocale(LC_ALL,"spanish");

    printf( "\n   Introduzca el a�o (deben ser 4 d�gitos): ");
    scanf( "%d", &year );
    
    // no tiene caso evaluar si es decimal, porque el entero s�lo toma la parte entera del n�mero que se introduce
    
    	if ( year>=10000 || year != (int)year) 
    	{
	 printf( "\n ERROR haz introducido un a�o que excede 4 d�gitos o has introducido decimales");
	 
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
