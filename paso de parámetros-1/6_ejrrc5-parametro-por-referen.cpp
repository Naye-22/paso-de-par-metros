/*
Fecha: 12/6/2024
Autor: Nayeli Cruz
orde: 6) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el 
promedio de estos números. Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/
#include <iostream>

using namespace std;

double CalcularPromedioYSuma(double num1, double num2, double num3, double& suma) {
    suma = num1 + num2 + num3;
    return suma / 3.0;
}

int main() {
    double a, b, c;
    double suma;
    
    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;
    
    double promedio = CalcularPromedioYSuma(a, b, c, suma);
    
    cout << "El promedio de los tres números es: " << promedio << endl;
    cout << "La sumatoria de los tres números es: " << suma << endl;
    
    return 0;
}