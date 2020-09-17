#include <windows.h>
#include <locale.h>
#include <iostream>
#define _WIN32_WINNT 0x0500

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 float pago;
 float precio;
 float total;

main()
{
	ShowWindow( GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_CTYPE, "Spanish");
	system("color F1");
    gotoxy(72,11);
	printf (" Ingrese el precio del producto: \n");
	gotoxy(70,13);
	scanf("%f", &precio);
	system("cls");
	gotoxy(70,13);
	printf ("Ingrese la cantidad con la que se pagó: \n");
	gotoxy(70,14);
	scanf("%f", &pago);
	system("cls");
	gotoxy(70,15);
	total=pago-precio;
	printf ("su cambio es: %f\n", total);
	system("pause");
	return 0;
 
 } 
