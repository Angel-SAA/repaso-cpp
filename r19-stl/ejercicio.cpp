#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <list>

int main(){
    std::vector<std::string> palabras{"sol","mar","sol","luz","sol"};
    std::vector<std::string> claves;
    std::vector<int> veces;
    
    for (const std::string& w : palabras) {
        bool esta = false;
        for (std::size_t i = 0; i < claves.size(); ++i)
            if (claves[i] == w) { veces[i]++; esta = true; break; }
        if (!esta) { claves.push_back(w); veces.push_back(1); }
    }

    std::map<std::string, int> conteo;
    for (const std::string& w : palabras) conteo[w]++;

    std::set<std::string> d(palabras.begin(), palabras.end());
    std::cout << d.size();

}