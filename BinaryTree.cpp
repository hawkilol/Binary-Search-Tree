//Autor: Kalil Saldanha Kaliffe

#include <iostream>
#include <stdio.h>
#include "BinaryTree.h"

using namespace std;

TypeTree* initializeTree(int valor){
    TypeTree* newNode = new TypeTree();
    newNode->valor = valor;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TypeTree* Insert(TypeTree* t, int valor){
    if(t == NULL){
        t = initializeTree(valor);
        return t;
    }
    else if(valor < t->valor){
        t->left = Insert(t->left, valor);
    }
    else if(valor > t->valor){
        t->right = Insert(t->right, valor);

    }
    else{
        cout<<"\nO dado já existe na arvore!";
    }
    return t;
}

bool Search(int valor, TypeTree* t){
    if(t == NULL){
        return false;
    }
    else if(t->valor == valor){
        return true;
    }
    else if(t->valor >= valor){
        return Search(t->left, valor);
    }
    else{
        return Search(t->right, valor);
    }
}
TypeTree* Remove(TypeTree* t, int valor){
    if(t == NULL){
        return t;
    }
    else if(valor < t->valor){
        t->left = Remove(t->left, valor);
    }
    else if(valor > t->valor){
        t->right = Remove(t->right, valor);
    }
    else{

        if(t->left == NULL && t->right == NULL){
            delete t;
            t = NULL;
        }
        else if(t->left == NULL){
            TypeTree* eliminado = t;
            t = t->right;

            delete eliminado;
        }
        else if(t->right == NULL){
            TypeTree* eliminado = t;
            t = t->left;
            delete eliminado;
        }
        else{
            TypeTree* eliminado = min(t->right);
            t->valor = eliminado->valor;
            t->right = Remove(t->right, eliminado->valor);
        }
    }
    return t;
}



TypeTree* Search(TypeTree* t, int valor){
    if(t == NULL){
        cout<<"\nEsse valor nao esta na Arvore!!";
        return t;
    }
    else if(t->valor == valor){
        return t;
    }
    else if(t->valor > valor){
        return Search(t->left, valor);
    }
    else{
        return Search(t->right, valor);
    }
}

TypeTree* min(TypeTree* t){
    if(t == NULL){
        cout<<"\nA arvore esta vazia!";
        return t;
    }
    else if (t->left == NULL){
        return t;

    }

    return min(t->left);

}

TypeTree* max(TypeTree* t){
    if(t == NULL){
        cout<<"\nA arvore esta vazia!";
        return t;
    }
    else if (t->right == NULL){
        return t;

    }

    return max(t->right);

}
void ShowTree(TypeTree* t, int nivel){
    if(t == NULL){
        return;
    }
    nivel += 10;

    ShowTree(t->right, nivel);
    cout<<"\n";
    for(int i = 10; i < nivel; i++){
        cout<<" ";
    }

    printf("%d\n", t->valor);
    ShowTree(t->left, nivel);


}



void PreOrder(TypeTree* t){
    if(t == NULL){
        return;

    }

    cout<<"\n"<<t->valor;
    PreOrder(t->left);
    PreOrder(t->right);

}


void InOrder(TypeTree *t){
    if(t == NULL) return;

    InOrder(t->left);
    cout<<"\n"<<t->valor;
    InOrder(t->right);

}

void PostOrder(TypeTree* t){
    if(t == NULL){
        return ;
    }

    InOrder(t->left);
    InOrder(t->right);
    cout<<"\n"<<t->valor;

}





