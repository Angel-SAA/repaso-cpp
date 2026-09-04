#include <iostream>
#include <string>
#include "arreglonuevo.hpp"

int main(){
    Arreglo<double> arr1(3);
    arr1[0] = 1.5;
    arr1[1] = 2.5;
    arr1[2] = 3.5;

    Arreglo<double> copiaDouble = arr1;
    copiaDouble[0] = 99.9;

    std::cout << "--- Prueba Double ---\n";
    std::cout << "Original: " << arr1[0] << "\n";
    std::cout << "Copia: " << copiaDouble[0] << "\n";
    
    Arreglo<std::string> arr2(2);
    arr2[0] = "Hola";
    arr2[1] = "Mundo";

    Arreglo<std::string> copiaString = arr2;
    copiaString[1] = "C++";

    std::cout << "--- Prueba String ---\n";
    std::cout << "Original: " << arr2[1] << "\n";
    std::cout << "Copia: " << copiaString[1] << "\n";

    return 0;
}