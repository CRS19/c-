#include <iostream>
#include <array>

const int sizeArray = 10;
using namespace std;


void otraFuncion(int arreglo[]){
    
      for(int i=0;i<10;i++){
       cout <<"Arreglo en la poss " << (i) << " es: "<< (arreglo[i]) << endl;
    }

}

void otraFuncionPuntero(int *pointer){

  for(int i=0;i<sizeArray;i++){
       cout <<"Arreglo en la poss del puntero " << (i) << " es: "<< (*(pointer+i)) << endl;
    }


}



int main(){

    int arreglo[sizeArray];
    
    for(int i=0;i<10;i++){
        arreglo[i] = random();
    }

   // otraFuncion(arreglo);

    for(int i=0;i<10;i++){
       cout <<"Arreglo en la poss " << (i) << " es: "<< (arreglo[i]) << endl;
    }

    cout << "-------------------------------" << endl;

    int *pointer;

    pointer = &arreglo[0];

    otraFuncionPuntero(pointer);

    cout << "" << (*(pointer)) << endl;

    return 0; 

}


