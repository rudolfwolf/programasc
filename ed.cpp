#include <stdio.h>
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
	  
int main (){
	int edad;
	system("color F4");
		gotoxy(70,10);
printf ("introduzca su edad: \n");
	gotoxy(70,11);
scanf ("%i", &edad);
	gotoxy(70,11);
		system("cls");{}

if ( edad>=18)
{
		gotoxy(70,10);
	printf("Bienvenido");
}
else
{
		gotoxy(70,10);
	printf ("no puedes acceder \n");

}

}

