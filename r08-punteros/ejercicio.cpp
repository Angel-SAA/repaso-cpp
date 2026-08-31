void intercambiar1(int a, int b) {
    int t = a; a = b; b = t;           // no cambia nada afuera
}
void intercambiar2(int* a, int* b) {
    int t = *a; *a = *b; *b = t;       // se llama: (&x, &y)
}
void intercambiar3(int& a, int& b) {
    int t = a; a = b; b = t;           // se llama: (x, y)
}

int main(){
    int x = 6;
    int y = 10;
    intercambiar1(x, y);
    intercambiar2(&x, &y);
    intercambiar3(x, y);
}