/*
Fecha: 12/6/2024
Autor: Nayeli Cruz
orde: 7)  Escriba la función que determina si un número pasado como parámetro es múltiplo de 7.
*/
#include <iostream>

using namespace std;

bool EsMultiploDeSiete(int numero) {
    return numero % 7 == 0;
}

int main() {
    int num;
    
    cout << "Ingrese un número: ";
    cin >> num;
    
    if (EsMultiploDeSiete(num)) {
        cout << num << " es múltiplo de 7." << endl;
    } else {
        cout << num << " no es múltiplo de 7." << endl;
    }
    
    return 0;
}
