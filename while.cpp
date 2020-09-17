#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <windows.h> 

main(){
	system("color F1");
    setlocale(LC_CTYPE, "Spanish");
	int x=15;
	while (x<101)
	{
	printf("%d\n",x);
	x++; }
	
}
