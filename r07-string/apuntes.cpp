#include <iostream>
#include <string>

int main(){
    std::string curso = "Estructuras";
    std::string tema = "Datos";
    std::string todo = curso + " de " + tema;
    todo += " y Algoritmos";
    std::string linea(5, '-');
    std::cout << todo << '\n' << linea << '\n';

    std::string s = "Estructuras de Datos";
    std::cout << s.size() << '\n';        // 20
    std::cout << s.substr(0, 11) << '\n'; // Estructura
    std::cout << s.substr(15) << '\n';    // Datos
    std::cout << s.front() << s.back();   // Es
    std::cout << s.empty() << '\n';       // 0

    std::string a = "casa", b = "Casa";
    for (std::size_t i = 0; i < a.size(); i++){
        std::cout << a[i] << '-';
    }
    for (char c:a){
        std::cout << c;
    }
    // usar if (texto.find("string") != std::string::npos) para saber si el string
    // aparece dentro del texto

    const char* x = "hola";
    const char* y = "hola";

    x == y; //Compara direcciones
    std::strcmp(x, y);   // Compara contenido
    std::strlen(x);      // Recorre hasta el '\0'
    
}