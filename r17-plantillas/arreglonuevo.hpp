#ifndef ARREGLONUEVO_HPP
#define ARREGLONUEVO_HPP

template <typename T>
class Arreglo{
    private:
        T* datos;
        int n;

    public:
        Arreglo(int tam) : datos(new T[tam]), n(tam){}
        ~Arreglo() {
            delete[] datos;
        }

        Arreglo(const Arreglo& otro) : datos(new T[otro.n]), n(otro.n) {
            for (int i = 0; i < n; ++i){
                datos[i] = otro.datos[i];
            }
        }
        Arreglo& operator=(const Arreglo& otro){
            if (this != &otro){ // Evitar autoasignación
                delete[] datos; // Limpiar memoria anterior
                n = otro.n;
                datos = new T[n]; // Para memoria nueva
                for (int i = 0; i < n; ++i){
                    datos[i] = otro.datos[i];
                }
            }
            return *this;
        }

        T& operator[](int i){
            return datos[i];
        }
        void set(int i, T v){
            datos[i] = v;
        }

        T get(int i) const{
            return datos[i];
        }

        int tam() const{
            return n;
        }
};

#endif 