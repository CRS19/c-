#include <iostream>

int sumar(int b){
// Esta funcion va a sumar 5 un numero
    b=7;
    std::cout << (b) << std::endl;
    return b+5;
}

int sumarP(int *b){
// Esta funcion va a sumar 5 un numero
    *b=7;
    std::cout << (*b) << std::endl;
    return *b+5;
}

int main(){

    int a = 5;
    int x = 100; // una variable con un valor
    int *pepito = &a; // a un puntero solo se le puede pasar la direccion de memoria de una variable.

    //std::cout << (a) << std::endl;
    //std::cout << (&a) << std::endl;
    std::cout << (pepito) << std::endl;
    std::cout << (*pepito) << std::endl;

    //std::cout << (sumar(a)) << std::endl;
    //std::cout << (a) << std::endl;

    //std::cout << (sumarP(pepito)) << std::endl;
    //std::cout << (a) << std::endl;

    pepito = &x; 
    
    std::cout << (pepito) << std::endl;
    std::cout << (*pepito) << std::endl;
    
return 0;
}