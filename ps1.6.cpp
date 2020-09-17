#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#define _WIN32_WINNT 0x0500

void gotoxy(int x,int y){ 
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
	  }
	  
int main(){
	ShowWindow( GetConsoleWindow(), SW_MAXIMIZE);
	float valor_dolar, dolares, pesos;
	setlocale(LC_CTYPE, "Spanish");
	system("color F1");
		gotoxy(70,10);
	printf ("¿cuál es el precio actual del dólar?\n");
		gotoxy(74,12);
	scanf ("%f", &valor_dolar);
	system("cls");
		gotoxy(70,10);
	printf ("Ingresa la cantidad de dólares a convertir\n");
		gotoxy(72,12);
	scanf ("%f", &dolares);
	pesos = valor_dolar * dolares;
	system("cls");
		gotoxy(70,10);
	printf("%f dolares son %f pesos mexicanos\n",dolares,pesos);
	gotoxy(70,12);
	system("pause");

}
