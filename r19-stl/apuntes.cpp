#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <list>
// #include <deque>

int main(){
    std::vector<std::string> palabras{"sol","mar","sol","luz","sol"};
    std::vector<std::string> claves;
    std::vector<int> veces;
    /*
    for (const std::string& w : palabras) {
        bool esta = false;
        for (std::size_t i = 0; i < claves.size(); ++i)
            if (claves[i] == w) { veces[i]++; esta = true; break; }
        if (!esta) { claves.push_back(w); veces.push_back(1); }
    }
    */

    // PAIR
    std::pair<std::string, int> p{"Ana", 20};
    std::cout << p.first << '\n';    // Ana
    std::cout << p.second << '\n';   // 20
    
    auto q = std::make_pair(3, 4.5);
    // q es std::pair<int, double>, deducido de los argumentos


    // MAP
    std::map<std::string, int> conteo;
    for (const std::string& w : palabras) conteo[w]++;
    
    for (const auto& par : conteo)               // luz=1 mar=1 sol=3
        std::cout << par.first << "=" << par.second << ' ';
    
    auto it = conteo.find("mar");
    if (it != conteo.end())
        std::cout << "mar aparece " << it->second << " veces";

    // SET
    std::set<std::string> vistas;
    vistas.insert("sol");
    vistas.insert("mar");
    vistas.insert("sol");   // ignorado: ya estaba
    
    std::cout << vistas.size();              // 2
    std::cout << vistas.count("sol");        // 1 si está, 0 si no
    // construir desde un vector, de golpe:
    std::set<std::string> d(palabras.begin(), palabras.end());


    // LIST
    std::list<int> l{10, 20, 30};
    l.push_front(5);    // 5 10 20 30
    l.push_back(40);    // el frente cuesta lo mismo que el final
    
    auto it = l.begin();
    ++it; ++it;         // hay que avanzar paso a paso: no hay l[2]
    l.insert(it, 99);   // inserta antes de it, sin mover elementos
    l.erase(it);        // borra ese elemento, sin mover los demás

    // Vector permite calcular la dirección de elemento 500,000 con 
    // una multiplicación



    /*
    CONTENEDOR  ACCESO POR   BUSCAR UN VALOR     INSERTAR                       ORDEN
                ÍNDICE
    vector      O(1)         O(n)               al final O(1), en medio O(N)    de inserción
    list        no ofrece    O(n)               O(1) con el iterador            de inserción
    map         por clave,   O(log n)           O(log n)                        por clave
    set         no ofrece    O(log n)           O(log n)                        por valor    
    
    
    
    */

    std::vector<int> v{4, 15, 8, 23};
    std::sort(v.begin(), v.end());

    std::vector<Alumno> alu = leerAlumno();
    std::sort(alu.begin(), alu.end(), [](const Alumno& a, const Alumno& b)){
        return a.prom > b.prom; // De mayor a menor
    }
}
