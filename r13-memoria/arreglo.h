#ifndef ARREGLO_H
#define ARREGLO_H

class Arreglo{
    private:
        int* datos;
        int n;

    public:
        Arreglo(int tam);
        ~Arreglo();

        Arreglo(const Arreglo&) = delete;
        Arreglo& operator=(const Arreglo&) = delete;

        void set(int i, int v);
        int get(int i) const;
        int tam() const;
};

#endif 