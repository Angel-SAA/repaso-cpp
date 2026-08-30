#include <iostream>

int main(){
    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50};

    int suma = 0;                               // A: Sumar todo
    // Debe ser < en lugar de <=, sino llega a fuera del arreglo
    for (int i = 0; i < N; i++) suma += d[i];

    int cuantos = 0;                            // B: contar > 25
    // i debe iniciar en 0 ya que en 1 brinca el primer valor
    for (int  i = 0; i<N; i++)
        if (d[i] > 25) cuantos++;

    int k = 0;                                  // C: Imprimir todo
    while (k < N) {
        std::cout << d[k] << ' ';
    }
}