#include <iostream>

class estudiantes{

public:
    char nombre[50];
    int nota;
private:
    int cedula;

public:
    int calcularNotas(int b);
    estudiantes();

};

int estudiantes::calcularNotas(int b){
    nota = nota + 1;
    return nota;
}

estudiantes::estudiantes(){
    cedula=17;
    std::cout << "El constructor se ha ejecutado" << std::endl;
}


int main(){


    std::cout << "hola mundo" << std::endl;

    estudiantes cris;


return 0;
}