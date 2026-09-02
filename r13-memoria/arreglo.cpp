#include "arreglo.h"
#include <iostream>

#include "arreglo.h"
#include <iostream>

Arreglo::Arreglo(int tam) : datos(new int[tam]), n(tam) {}

Arreglo::~Arreglo() { 
    delete[] datos; 
}

void Arreglo::set(int i, int v) { 
    datos[i] = v; 
}

int Arreglo::get(int i) const { 
    return datos[i]; 
}

int Arreglo::tam() const { 
    return n; 
}