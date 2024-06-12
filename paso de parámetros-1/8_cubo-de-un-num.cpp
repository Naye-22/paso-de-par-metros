/*
Fecha: 12/6/2024
Autor: Nayeli Cruz
orde: 8) Escriba la función que recibe como parámetro un entero y devuelve el cubo del mismo.
*/
#include <iostream>

using namespace std;

int CalcularCubo(int numero) {
    return numero * numero * numero;
}

int main() {
    int num;
    
    cout << "Ingrese un número entero: ";
    cin >> num;
    
    int cubo = CalcularCubo(num);
    
    cout << "El cubo de " << num << " es: " << cubo << endl;
    
    return 0;