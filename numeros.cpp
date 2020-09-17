#include <iostream>
#include <locale.h>
#include <windows.h>

 int n1,n2,n3,n4;
 main (){
 	system("color F0");
 	setlocale (LC_ALL, "spanish");
 	printf("Ingrese el primer número\n");
 	scanf("%d",&n1);
 	system("cls");
 	printf("Ingrese el segundo número\n");
 	scanf("%d",&n2);
 	system("cls");
 	printf("Ingrese el tercer número\n");
 	scanf("%d",&n3);
 	system("cls");
 	printf("Ingrese el cuarto número\n");
 	scanf("%d",&n4);
 	system("cls");
 	if(n1>n2>n3>n4)
 	{
 		printf("la sucesión de números está ordenada de mayor a menor");
	 }
	 else
	 {
	 	printf("la sucesión de números no está ordenada de mayor a menor");
	 }
 }
