#include <conio.h>
#include <stdio.h>
#include <windows.h> 
#define _WIN32_WINNT 0x0500

int main()
{
    int edad;
system("color F4");
    printf( "\n   Introduzca edad: " );
    scanf( "%d", &edad );
    system("cls");
    system("pause>nul");

    if ( edad >= 0 && edad <= 120 )
        if ( edad < 2 )
            printf( "\n   BEB%c", 144 );
        else
            if ( edad < 13 )
                printf( "\n   NI%cO", 165 );
            else
                if ( edad < 18 )
                    printf( "\n   ADOLESCENTE" );
                else
                    if ( edad < 31 )
                        printf( "\n   JOVEN");
                    else
                        if ( edad < 65 )
                            printf( "\n   ADULTO" );
                        else
                            printf( "\n   ANCIANO" );
    else
        printf( "\n   ERROR: Edad incorrecta." );

    getch();
   
    return 0;
}
