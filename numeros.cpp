#include <iostream>
#include <locale.h>
#include <windows.h>

 int n1,n2,n3,n4;
 main (){
 	system("color F0");
 	setlocale (LC_ALL, "spanish");
 	printf("Ingrese el primer n�mero\n");
 	scanf("%d",&n1);
 	system("cls");
 	printf("Ingrese el segundo n�mero\n");
 	scanf("%d",&n2);
 	system("cls");
 	printf("Ingrese el tercer n�mero\n");
 	scanf("%d",&n3);
 	system("cls");
 	printf("Ingrese el cuarto n�mero\n");
 	scanf("%d",&n4);
 	system("cls");
 	if(n1>n2>n3>n4)
 	{
 		printf("la sucesi�n de n�meros est� ordenada de mayor a menor");
	 }
	 else
	 {
	 	printf("la sucesi�n de n�meros no est� ordenada de mayor a menor");
	 }
 }
