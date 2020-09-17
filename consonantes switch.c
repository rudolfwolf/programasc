// librerías
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>


//inicia el main 
int main()
{

// se declara la variable 
 char letra;
 setlocale(LC_ALL,"spanish"); //para ponerlo en español 
 
 system("color 01");
 printf( "\n Introduzca una letra:  " ); // pide introducir una letra 
 scanf( "%c", &letra );  
   
 switch(letra)
 {
 case 'b':
 printf("Es consonante 'b' o 'B'");
 break;
 
 case 'c':
 printf("Es consonante 'c' o 'C'");
 break;
   
 case 'd': 
  printf("Es consonante 'd' o 'D'");
 break;
 
 
 case 'f': 
 printf("Es consonante 'f' o 'F'");
 break;
 
 case 'g': 
  printf("Es consonante 'g' o 'G'");
 break;
 
 
 case 'h':
 printf("Es consonante 'h' o 'H'");
 break;
 
 case 'j': 
 printf("Es consonante 'j' o 'J'");  
break;
 case 'k': 
 printf("Es consonante 'k' o 'K'");
 break;
 
 case 'l': 
 printf("Es consonante 'l' o 'L'");
 break;
 
 case 'm': 
 printf("Es consonante 'm' o 'M'");
 break;
 
  case 'n': 
 printf("Es consonante 'n' o 'N'");
 break; 
 
 case 'ñ': 
 printf("Es consonante 'ñ' o 'Ñ'");
 break;
 
  case 'p': 
 printf("Es consonante 'p' o 'P'");
 break;
 
  case 'q': 
 printf("Es consonante 'q' o 'Q'");
 break;
 
 
case 'r': 
 printf("Es consonante 'r' o 'R'");
 break; 
 
 case 's': 
 printf("Es consonante 's' o 'S'");
 break;
 
 case 't': 
 printf("Es consonante 't' o 'T'");
 break;
 
  case 'v': 
 printf("Es consonante 'v' o 'V'");
 break;
 
 case 'w': 
 printf("Es consonante 'w' o 'W'");
 break;
 
 case 'x': 
 printf("Es consonante 'x' o 'X'");
 break; 
 
 case 'y': 
 printf("Es consonante 'y' o 'Y'");
 break; 
 
 case 'z': 
 printf("Es consonante 'z' o 'Z'");
 break;

 default:
  printf("\n No es un dato admitido\n");
  }
  
 system("pause"); //fin del programa
 
 }
 
 
