#include <iostream>
#include <string.h>



struct estudiante{
    int cedula;
    char nombre[50];
    struct estudiante *siguiente;
};


int main(){

    estudiante cristian;
    int a;
    cristian.cedula = 17251231;
    strcpy(cristian.nombre,"Cristian Flores");
    
    estudiante mirkka;
    mirkka.cedula = 1725231231;
    strcpy(mirkka.nombre,"Mirkka Puente");


    estudiante cami;
    cami.cedula = 1725231231;
    strcpy(cami.nombre,"Camila Puente");

    cristian.siguiente = &mirkka;
    mirkka.siguiente = &cami;
    cami.siguiente = NULL;

    std::cout << (cristian.siguiente -> siguiente) << std::endl;

return 0;
}