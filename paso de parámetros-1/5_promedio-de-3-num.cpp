/*
Fecha: 12/6/2024
Autor: Nayeli Cruz
orde: 5) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio 
de estos números.
*/
#include <iostream>

using namespace std;

double CalcularPromedio(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double a, b, c;
    
    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;
    
    double promedio = CalcularPromedio(a, b, c);
    
    cout << "El promedio de los tres números es: " << promedio << endl;
    
    return 0;
}
