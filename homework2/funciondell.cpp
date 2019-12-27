#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};



void delAll(int x,Node *head){
    

    cout << "Funcion dell All llamada........" << endl;

   Node *a = head;
    
    cout << "Head linkeado ........" << endl;

    int i=0;
    while ( a->next != NULL ) {
        
        

        cout << "While ejecutado "<< (i) <<" veces  ........" << endl;

        if ( a->next->data == x ) {
            Node *t=a->next;
            cout << "Nodo t ha sido creado..............." << endl;
            a->next = a->next->next;
            cout << "nodo a ha sido reasignado..............." << endl;
           // delete t;
        }
        
        else{

        a = a->next;
        }


        i=i+1;
    }
}



int main(){

    Node head;
    Node uno;
    Node dos;
    Node tres;

    head.next = &uno;
    uno.next=&dos;
    uno.data =3;
    
    dos.next=&tres;
    dos.data=5;
    
    tres.next=NULL;
    tres.data=8;

    cout << "Nodos creados........" << endl;

    cout <<"El dato del siguiente es: "<< (uno.next->data) << endl;

    delAll(5,&head);

    cout <<"El dato del siguiente es: "<< (uno.next->data) << endl;

    return 0;
}