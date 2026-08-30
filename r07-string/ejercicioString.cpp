#include <iostream>
#include <string>

int contarPalabras(const std::string& s) {
    int n = 0;
    bool dentro = false;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            dentro = false;
        }
        else if(!dentro){
            dentro = true;
            n++;
        }
    }
    return n;
}

std::string voltear(const std::string& s) {
    std::string volteado = "";
    for (int i = static_cast<int>(s.size()) - 1; i >= 0; i--) {
        volteado += s[i];
    }
    return volteado;
}

int main() {
    std::string palabra = "a b c d";
    
    std::cout << "Cantidad de caracteres: " << contarPalabras(palabra) << '\n';
    std::cout << "Palabra invertida: " << voltear(palabra);

    return 0;
}