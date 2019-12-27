#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(){

    long int a[] = {1,2,3,4,5};

    array<int,10> arreglo;

    arreglo.fill(5);

    cout << (arreglo.rbegin()) << endl;

    cout<< (sizeof(a)) << "   "<< (sizeof(long int))<< "   " << (sizeof(a)/sizeof(long int))<< endl;

    return 0;
}