#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int main()

{

int compra,pagar;
system("color f0");
printf(" ingrese el monto de la compra: \n");
scanf("%d",&compra);

if(compra<=800) 
pagar=compra;

if(compra>=800&&compra<=1500)

pagar=compra-((10*compra)/100);

if(compra>=1500&&compra<=5000)

pagar=compra-((15*compra)/100);

if (compra>=5000)

pagar=compra-((20*compra)/100);


printf("\n  el precio total a pagar es: %d", pagar);


}





