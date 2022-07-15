//Autor: Kalil Saldanha Kaliffe
#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main(void){

    int R[] = {86, 11, 7, 35, 170, 2, 120, 21, 88, 152, 31, 12, 181, 28, 134, 70, 1, 85, 25, 77, 10, 128, 198};
    TypeTree* root = NULL;
    int search = 7;

    for(int i = 0; i < sizeof(R)/sizeof(R[0]); i++){
        root = Insert(root, R[i]);
    }

    cout<<"\nBusca: "<< Search(root, search)->valor<<"\n";
    cout<<"Remove: "<<search;
    Remove(root, search);
    cout<<"\nBusca: "<< Search(root, search)<<"\n";
    cout<<"\nEm ordem:";
    InOrder(root);
    cout<<"\nmin: "<< min(root)->valor<<"\n";
    cout<<"\nmax: "<< max(root)->valor<<"\n";
   // ShowTree(root, 0); //mostra a arvore a partir da raiz da esquerda para a direita e nao de cima para baixo como descrito no trabalho
}
