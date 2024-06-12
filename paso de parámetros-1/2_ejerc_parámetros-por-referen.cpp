/*
Fecha: 12/6/2024
Autor: Nayeli Cruz
orde: 2) Ejercicio de paso de parámetros por referencia. (Realizado en clases)
*/
#include<iostream>
using namespace std;
 
 int FuncionPasosPorReferencia(int num)
 {
    num = num * 10;
    cout<<endl<<"el valor de num antes de la función: "<<num;
    return 1;
 }
 //funcion que no retorna valores. pero intercambia lo valorese de dos variables. sean dos variables
 //a= 10 y b=20 la funcion debe hacer que a=20 y b= 1. (Use parametros por referencia)
 void Intercambio(int a, int b)
 {
    int Aux = a;
    a = b;
    b = a;
 }
 int main ()
 {
    int num = 2;
    cout<<endl<<"El valor de variable num anted de la llamada: "<<num;
    FuncionPasosPorReferencia(num);
    cout<<endl<<"El valor de variable num despues de la llamada: "<<num;
    return 0;

int num1 = 10 , num2 = 20; 
Intercambio(num1, num2);
cout<<endl<<"num1 = "<<num1;
cout<<endl<<"num2 = "<<num2;

 }