#include <iostream>
#include <string>

/*
struct Reserva {
    std::string sala;   // invariante 1: no vacia
    int personas;       // invariante 2: entre 1 y 20
    int horaInicio, horaFin;   // inv. 3: 0 <= inicio < fin <= 23
};
*/

class Reserva{
    public:
        bool asignarPersonas(int p){
            if (p<1 || p>20){
                return false;
            }
        }
        bool asignarHorario(int ini, int fin){
            if (ini < 0 || fin > 23 || ini >= fin){
                return false;
            }
            horaInicio = ini;
            horaFin = fin;
            return true;
        }
        bool asignarSala(std::string cadena){
            if (cadena.empty()){
                return false;
            }
            return true;
        }
    private:
        std::string sala = "A5";
        int personas = 1;
        int horaInicio = 8;
        int horaFin = 9;
};

int main(){

}