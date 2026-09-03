#include <iostream>
#include <string>

class Persona{
    protected:
        std::string nombre_;
        int edad_ = 0; // Campo para Persona
    public:
        Persona(){
            std::cout << "Constructor Persona\n";
        }
        ~Persona(){
            std::cout << "Destructor Persona\n";
        }
};

class Empleado : public Persona{
    protected:
        std::string puesto_ = "Sin puesto"; // Campo para Empleado
    public:
        Empleado(){
            std::cout << "Constructor Empleado\n";
        }
        ~Empleado(){
            std::cout << "Destructor Empleado\n";
        }
};

class Gerente : public Empleado{
    private:
        int salario_ = 0; // Campos para Gerente
        int bonus_ = 0;
    public:
        Gerente(){
            std::cout << "Constructor Gerente\n";
        }
        Gerente(std::string nombre, int salario, int bonus) : salario_(salario), bonus_(bonus){
            nombre_ = nombre;
            std::cout << "Constructor Gerente (con parametros)\n";
        }
        ~Gerente(){
            std::cout << "Destructor Gerente\n";
        }
};

int main(){
    std::cout << "--- inicio ---\n";
    {
        Gerente g("Ana", 1000, 5);
    }
    std::cout << "--- fin ---\n";
}