#include <iostream>

void recibirNotas(double n[], int cuantas){
    for (int i = 0; i<cuantas; i++){
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> n[i];
    }
}

double calcularPromedio(const double n[], int cuantas){
    double s = 0;
    for (int i = 0; i< cuantas; i++){
        s+=n[i];
    }
    return s /cuantas;
}

bool decision(double pro){
    return pro >= 70.0;
}

int main(){
    const int cantidad = 3;
    double notas[cantidad];

    recibirNotas(notas, cantidad);
    double promedio = calcularPromedio(notas, cantidad);
    
    if (decision(promedio)){
        std::cout << "Aprobado con promedio de: " << promedio;
    }
    else{
        std::cout << "Reprobado con promedio de: " << promedio;
    }

    return 0;

}