#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;
string TransformarDecimalABinario(int decimal);
void SumaBinaria(string a, string b);
int main()
{
    string sumando1,sumando2;
    int a,b,c;
    cout<<"Ingrese primer binario a sumar";
    cin>>sumando1;
    cout<<"Ingrese segundo binario a sumar";
    cin>>sumando2;
    //vect = TransformarDecimalABinario(26);
    SumaBinaria(sumando1,sumando2);



    return 0;
}
string VolcarString(string valor){

    char obtenerChar;
    string resultado;
    stringstream s;
    resultado = "";
    for(int i = valor.size()-1; i>=0 ;i--){
       obtenerChar = valor[i];
       s << obtenerChar;
        resultado = s.str();
    }

    return resultado;
}
string TransformarDecimalABinario(int decimal){
    int residuo,resultadoDivision,contadorAux,division;
    string binarioArray;
    stringstream s;
    binarioArray="";
    residuo=0;
    division=decimal;
    //contadorAux=0;
    while(division>=1){
        residuo=division%2;
        s << residuo;
        division=trunc(division/2);
        binarioArray=s.str();
    }
    //VolcarString(binarioArray);
    binarioArray= VolcarString(binarioArray);
    return binarioArray;
}
void MostrarArray(int vectorleer[],int tamanio){
    for(int i=0;i<tamanio;i++){
        cout<<"["<<vectorleer[i]<<"]";
    }
}
void InicializarArray(int vectorleer[],int tamanio){
     for(int i=0;i<tamanio;i++){
        vectorleer[i]=0;
    }
}
int ObtenerTamanioMayor(int valor_1,int valor_2){
    int resultado;
    if(valor_1 > valor_2){
        resultado = valor_1;
    }
    else{
        resultado= valor_2;
    }
    return resultado;
}

void SumaBinaria(string sumador_1,string sumador_2){
    int tamaniomayor,contadorSum1,contadorSum2;
    int sumador1[255],sumador2[255],acarreo[255],resultado[255];
    tamaniomayor= ObtenerTamanioMayor(sumador_1.size(),sumador_2.size()) + 1;
    contadorSum1=sumador_1.size();
    contadorSum2=sumador_2.size();
    InicializarArray(sumador1,tamaniomayor);
    InicializarArray(sumador2,tamaniomayor);
    InicializarArray(acarreo,tamaniomayor);
    InicializarArray(resultado,tamaniomayor);

    //LLENAMOS LOS ARRAYS CON CADA CARACTER DE LOS NUMEROS BINARIOS
    for(int i=tamaniomayor-1;i>=0;i--){

        if(contadorSum1>0){

            sumador1[i] = (sumador_1[contadorSum1-1] - '0');//Convierte un char en un entero
        }
        else{
            sumador1[i]=0;
        }
         contadorSum1--;

    }
    for(int i=tamaniomayor-1; i>=0;i--){
        if(contadorSum2 > 0){
             sumador2[i] = (sumador_2[contadorSum2-1] - '0');//Convierte un char en un entero
        }
        else{
            sumador2[i]=0;
        }
         contadorSum2--;

    }//END LLENADO

    //PROCEDIMIENTO DE SUMA DE BINARIOS
    for(int i=tamaniomayor-1;i>=0;i--)
    {
        int resultadoaux= acarreo[i]+sumador1[i]+sumador2[i];
        string aux;
        aux = TransformarDecimalABinario(resultadoaux);
        cout<<"SOY AUX"<<aux;
        if(aux.size()<2){
            resultado[i] = (aux[0]-'0');
        }
        else{
            resultado[i] = (aux[1]-'0');
            acarreo[i-1] = (aux[0]-'0');
        }

    }

    cout<<endl;
    MostrarArray(acarreo,tamaniomayor);
    cout<<endl;
    MostrarArray(sumador1,tamaniomayor);
    cout<<endl;
    MostrarArray(sumador2,tamaniomayor);
    cout<<endl;
    MostrarArray(resultado,tamaniomayor);
    cout<<endl;
}
