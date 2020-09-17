#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define _WIN32_WINNT 0x0500

 void gotoxy(int x,int y){  //columna, renglón
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
	  }
	  
int main(){
	
	ShowWindow( GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_CTYPE, "Spanish");
	system("color F1");
	long int cantidad_dias, cantidad_segundos;
	gotoxy(65,10);
	printf("Ingrese el número de días que desea calcular: ");
	gotoxy(66,11);
	scanf("%ld", &cantidad_dias);
	system("cls");
	
	cantidad_segundos = cantidad_dias * 86400;
	system("cls");
	gotoxy(72,10);
	printf("Hay %ld segundos en %ld días",cantidad_segundos,cantidad_dias);
	system("pause>nul");
	return 0;
}


