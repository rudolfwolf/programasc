//Este programa indica que dia de la semana es con base en un numero ingresado por el usuario.
#include<stdio.h>
#include<conio.h>
#include <locale.h>
#include<windows.h>

main()
{
  setlocale(LC_CTYPE, "Spanish");
  char dia; 
  
    
  printf("Introduce cualquier dia de la semana en números del 1 al 7:\n"); 
  
  
  scanf("%c",&dia);

    switch (dia){
  
  case '1':
  printf("Hoy es Lunes"); 
  break;
  case '2':
  printf("Hoy es Martes");
  break;
  case '3':
  printf("Hoy es Miércoles");   
  break;
  case '4':
  printf("Hoy es Jueves");
  break;
  case '5':
  printf("Hoy es Viernes");
  break;
  case '6':
  printf("Hoy es Sábado");
  break;
  case  '7':
  printf("Hoy es Domingo");
  default:
  printf("No es un dato admitido D:  ");
  }
  
  system("pause");
  }

