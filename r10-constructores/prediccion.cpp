Sesion global("global");
int main(){
    Sesion a("a");
    { Sesion b("b"); Sesion c("C", 2);}
    std::cout << "--- medio ---\n";
    Sesion d;
}

/*
Sesion(global)
Sesion(a)
Sesion(b)
Sesion(c, 2)
~Sesion(c)
~Sesion(b)
--- medio ---
Sesion(sin nombre)
~Sesion(sin nombre)
~Sesion(a)
~Sesion(global)
*/