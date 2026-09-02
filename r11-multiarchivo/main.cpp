#include <iostream>
#include "punto.h"

int main(){
    Punto a;
    Punto b(5);
    { Punto c(1, 2); }
    std::cout << "fin de main\n";
}