#include <iostream>
#include <locale.h>
#include <windows.h>

 int n1,n2,n3,n4;
 main (){
 	system("color F0");
 	setlocale (LC_ALL, "spanish");
 	printf("Ingrese el primer n�mero:\n");
 	scanf("%d",&n1);
 	printf("Ingrese el segundo n�mero:\n");
 	scanf("%d",&n2);
 	printf("Ingrese el tercer n�mero:\n");
 	scanf("%d",&n3);

 
    if ( n1 >= n2 && n1 >= n3 )
        printf( "\n   %d es el mayor.", n1 );
    else

        if ( n2 > n3 )
            printf( "\n   %d es el mayor.", n2 );
        else
            printf( "\n   %d es el n�mero mayor.", n3 );
 

system("pause>nul");

    return 0;
}
