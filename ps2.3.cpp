#include <iostream> 
#include <windows.h>

int num1,num2,r; 
main (){
	system ("color f0"),
		printf("Ingrese el primer valor:\n");
	scanf("%i",&num1);
	system ("cls");
		printf("Ingrese el segundo valor:\n");	
	scanf("%i",&num2);
	system ("cls");
r=num1%num2;

if((num1 % num2 == 0) && (num2!=0))
   {
      printf("%d es Divisible entre %d",num1,num2);
   }else{
      printf("%d NO es Divisible entre %d",num2,num1);
   }

   return 0;
   }



		

