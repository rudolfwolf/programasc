#include <stdio.h>
#include <iostream>   
#include <locale.h> 
#include <windows.h>
#include <conio.h>
#include <math.h>
int main() {
  float f; 
  int ent,d;

  printf("Ingrese un numero: ");
  scanf("%f",&f);
  scanf("%d",&d);
  
  
  ent = f;
 

  if(f-ent==0&f>999 and d%4==0 and  d%400==0){
  	printf("el numero es entero y mayor a 4 digitos y es un año bisciesto");
  	
   
  	}
  	
  
  else{
  	printf("el numero es decimal o menor a 4 digitos ");
  }
  return 0;
}
