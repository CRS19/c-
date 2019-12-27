#include <iostream>

class estudiantes{

    public:
        char nombre[50];
        int nota;
    private:
        int cedula;

    public: //
        int calcularNotas(int b);
        estudiantes();
        estudiantes(int a);

};

int estudiantes::calcularNotas(int b){
    nota = nota + 1;
    return nota;
}

estudiantes::estudiantes(int a){
    nota = a;
}

estudiantes::estudiantes(){
    cedula=17;
    std::cout << "El constructor se ha ejecutado" << std::endl;
}


int main(){

    std::cout << "hola mundo" << std::endl;
    estudiantes cris(10);
    int resultado = cris.calcularNotas(1); 
    std::cout << (resultado) << std::endl;
    std::cout << cris.nota << std::endl;
    

return 0;
}