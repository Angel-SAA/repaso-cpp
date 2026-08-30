#include <iostream>


// establecer que mejor = v[0];
// Empezar en i = 1
int maximo(const int v[], int n) { // C
    int mejor;
    for (int i = 0; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main(){
    const int tam = 5;
    int numeros[tam];
    maximo(numeros, tam);
}