#include <iostream>
#include <locale.h>

 int edad;
 main ()
 {
 	setlocale (LC_ALL, "spanish");  
 printf("¿cuál es su edad?\n");
 scanf("%d",&edad);
 if(edad>=6 && edad<=12)
{
	printf("Usted está cursando la primaria.\n");
 } 
 else if(edad>=13 && edad<=15)
 {
 	printf("Usted está cursando la secundaria.\n");
 }
 else if(edad>=16 && edad<=18)
 {
 	printf("Usted está cursando el bachillerato.\n");
 }
 else
{
	printf("Usted está fuera del rango.\n");
}

}





























