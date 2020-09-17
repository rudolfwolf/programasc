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

int main()
{
	ShowWindow( GetConsoleWindow(), SW_MAXIMIZE);
    float area, radio, longitud;
    setlocale(LC_CTYPE, "Spanish");
	system("color F1");
	gotoxy(82,3);
    printf( " Introduzca radio: \n" );
    gotoxy(82,6);
    scanf( "%f", &radio );
    area = 3.141592 * radio * radio;
    longitud = 2 * 3.141592 * radio;
	system("cls");
	  gotoxy(72,8);
	printf( "El área de la circunferencia es: %.2f", area );
	  gotoxy(68,10);
    printf( "La longitud de la circunferencia es: %f", longitud );
    gotoxy(68,12);
    	system("pause>nul");
    system("cls");
    
	return 0;
}
