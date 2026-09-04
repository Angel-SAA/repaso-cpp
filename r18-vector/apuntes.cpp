#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> v{10, 20, 30};

    std::cout << "v[1] = " << v[1] << '\n';
    std::cout << "size = " << v.size() << '\n';

    return 0;

    std::vector<int> a; // vacío
    std::vector<int> b(5); // 5 ceros
    std::vector<int> c(5, 7); // 5 sietes
    std::vector<int> d{1, 2, 3}; // Esos 3 elementos
    std::vector<int> e(d); // copia de d


    d.push_back(4); // Agrega al final
    d.pop_back();   // Quita el último
    d[0] = 99;      // Acceso indexado
    d.front();      // Primer elemento
    d.back();       // Último
    d.size();       // Cuántos hay
    d.empty();      // ¿Ninguno? ¿Vacío?
    d.back();        // Último elemento


    /*
    Vector guarda sus elementos en un bloque
    contiguo de memoria dinámica

    capacidad -> tamaño de ese bloque
    tamaño -> cuánto de él esta ocupado

    size() -> Elementos que existen
    capacity() -> Espacio reservado

    size() devuelve un tipo sin signo
    y la comparación convierte el negativo
    en un número enorme
    usa static_cast<int>(vector.size())

    Si el vector esta lleno y ya no cabe
    más, se crea una copia con todos los 
    elementos y se duplica la capacidad 
    que tenía, finalmente se agrega el 
    elemento que se desea


    at() revisa el índice, []no
    */

    std::vector<int> n{ 10, 20, 30};

    n[7];

    try{
        std::cout << n.at(7) << '\n';
    }
    catch (const std::out_of_range& e){
        std::cout << "out_of_range: " << e.what() << '\n';
    }
    // at() lanza una excepción que puedes capturar
    // recuerda el throw, try y catch

    for (auto it = v.begin(); it != v.end(); ++it){
        std::cout << *it << ' '; //*it da el elemento
        // v.end() señala una posición después del último
    }


    for (int x : v) std::cout << x << ' '; //copia
    for (const int& x : v) std::cout << x << ' '; // no copia

    for (int& x : v) x*=2; // Modifica el vector
    // Todos sus elementos al doble
    // sin & quedaría igual ya que x es una copia
    // y se descarta en cada vuelta
}