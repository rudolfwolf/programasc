#include <iostream>
#include <locale.h>

 int edad;
 main ()
 {
 	setlocale (LC_ALL, "spanish");  
 printf("�cu�l es su edad?\n");
 scanf("%d",&edad);
 if(edad>=6 && edad<=12)
{
	printf("Usted est� cursando la primaria.\n");
 } 
 else if(edad>=13 && edad<=15)
 {
 	printf("Usted est� cursando la secundaria.\n");
 }
 else if(edad>=16 && edad<=18)
 {
 	printf("Usted est� cursando el bachillerato.\n");
 }
 else
{
	printf("Usted est� fuera del rango.\n");
}

}





























