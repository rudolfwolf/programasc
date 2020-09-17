/*Hacer un programa en C que solicite al usuario que ingrese una fecha (con numeros)
  y calcule a que dia del año corresponde.
  Por ejemplo:
  Si ingresa 31 12 1998   el dia del año es el 365
 */
 
#include <iostrem>
#include <stdio.h>
#include<standlib.h>t naia

main()
{
 int dia, mes, anio, dia_anio=0;
 
 printf("Ingrese el dia: \n);
 scanf("%d", &dia);
 printf("Ingrese el mes: \n);
 scanf("%d",&mes);
 printf("Ingrese el anio: \n);
 scanf("%d",&anio);
  
switch(ch) {
                        case '1': 
                                  dia_anio=dia;
                                  break;
                         case '2':
                                  dia_ani=dia+31;
                        break;
                         case '3':
                                  dia_ani=dia+31+28;
                        break;
                          case '4':
                        break;
                         case '5': 
                        break;
                         case '6': 
                        break;
                         case '7': printf("Julio dia del año %d.");
                        break; 
                        case '8': puts("Agosto dia del año %d.");
                        break; 
                        case '9': puts("Sabado.");
                        break; 
                        case '10': puts("Sabado.");
                        break; 
                        case '11': puts("Sabado.");
                        break; 
                        case '12': puts("Sabado.");
                        break; 
                        default: puts("Error"); 
                        } // fin del switch
                         
                        
                        
                        printf("La cantidad de dias del año son: %d", dia_anio);
} //fin del main

