#include <iostream>

// Quitar el <= y reemplazar por <
int suma(const int v[], int n) { // A
    int s = 0;
    for (int i = 0; i <= n; i++)
        s += v[i];
    return s;
}

int main(){
    const int tam = 5;
    int numeros[tam];
    suma(numeros, tam);
}