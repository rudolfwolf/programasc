#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>

int main( void ) {
	
	int dia = 0, mes = 0;
	setlocale(LC_CTYPE, "spanish");
	system("color F1");
	printf("\t\t\tbienvenido\n\n\n");
	
	do{
		printf("Introduzca el número de tu mes de nacimiento (ejemplo: 1 = Enero):");
		scanf( "%d", &mes );
		if ( mes < 1 || mes > 12 ){
			system("cls");
			printf(" *** Tu mes excede los límitesde lo conocido. *** \n\n ");
		}
	} while( mes < 1 || mes > 12 );
	
	if( mes== 2){
		do{
			printf("Introduce tu día de nacimiento: ");
			scanf("%d", &dia );
			if ( (dia < 1 || dia > 29) ){
				system("cls");
				printf("*** Tu mes excede los límites de lo conocido. *** \n\n");
				printf(" Mes: %d\n", mes);	
			}
			
		} while( dia < 0 || dia > 29);
	} else {
		do{
		  printf("Introduce tu día de nacimiento: ");
		  scanf("%d", &dia );
		  
		  if( (dia < 1 || dia > 31) ) {
		  	  system("cls");
		  	  printf(" *** Tu mes excede los límites de lo conocido. *** \n\n ");
		  	  printf("Mes: %d\n", mes);
		  }
		  
		} while( dia < 1 || dia > 31);
	}
	
	switch ( mes ) {
		case 1:
			if( dia > 1 && dia < 19) {
				printf("Eres Capricornio.\n\n");
			} else if( dia > 20 && dia < 31) {
				printf("Eres Acuario.\n\n");
			}
			
		break;
		
		case 2:
		   	if( dia > 1 && dia < 18) {
				printf("Eres Acuario.\n\n");
			} else if( dia > 19 && dia < 29) {
				printf("Eres Piscis.\n\n");
			}
			
	    break;

	    case 3:
	    	if( dia > 1 && dia < 20) {
				printf("Eres Piscis.\n\n");
			} else if( dia > 21 && dia < 31) {
				printf("Eres Aries.\n\n");
			}
	
		break;
		
		case 4:
			if( dia > 1 && dia < 19) {
				printf("Eres Aries.\n\n");
			} else if( dia > 20 && dia < 30) {
				printf("Eres Tauro.\n\n");
			}
				
		break;
			
		case 5:
	      if( dia > 1 && dia < 20) {
				printf("Eres Tauro.\n\n");
			} else if( dia > 21 && dia < 31) {
				printf("Eres Géminis.\n\n");
			}
					
		break;
		
		case 6: 
		  if( dia > 1 && dia < 20) {
				printf("Eres Géminis.\n\n");
			} else if( dia > 21 && dia < 30) {
				printf("Eres Cáncer.\n\n");
			}
		
		break;
		
		case 7:
		  if( dia > 1 && dia < 22) {
				printf("Eres Cáncer.\n\n");
			} else if( dia > 23 && dia < 31) {
				printf("Eres Leo.\n\n");
			}
		
		break;
		
		case 8:
          if( dia > 1 && dia < 22) {
				printf("Eres Leo.\n\n");
			} else if( dia > 23 && dia < 31) {
				printf("Eres Virgo.\n\n");
			}
		
		break;
		
		case 9:
		  if( dia > 1 && dia < 22) {
				printf("Eres Virgo.\n\n");
			} else if( dia > 23 && dia < 31) {
				printf("Eres Libra.\n\n");
			}
			
		break;
		
		case 10:
		  if( dia > 1 && dia < 22) {
				printf("Eres Libra.\n\n");
			} else if( dia > 23 && dia < 31) {
				printf("Eres Escorpio.\n\n");
			}
		
		break;
		
		case 11: 
		  if( dia > 1 && dia < 21) {
				printf("Eres Escorpio.\n\n");
			} else if( dia > 22 && dia < 31) {
				printf("Eres Sagitario.\n\n");
			}
		
		break;
		
		case 12: 
		
		  if( dia > 1 && dia < 21) {
				printf("Eres Sagitario.\n\n");
			} else if( dia > 22 && dia < 31) {
				printf("Eres Capricornio.\n\n");
			}
		
		break;
		
		default:
		break;
	}
	
	return 0;	
}
