//Autor: Kalil Saldanha Kaliffe

typedef struct TypeTree{
    int valor;
    TypeTree* left;
    TypeTree* right;
    int tempValor;
    TypeTree* tempNode;
}TypeTree;



TypeTree* initializeTree(int valor);
TypeTree* Insert(TypeTree* Tree, int valor);
bool Search(int valor,TypeTree* Tree);
TypeTree* Search(TypeTree* Tree, int valor );
TypeTree* Remove(TypeTree* Tree, int valor);
void ShowTree(TypeTree* Tree);
void PreOrder(TypeTree* t);
void InOrder(TypeTree* t);
void PostOrder(TypeTree* t);
void inOrderSucc(TypeTree* t);
TypeTree* min(TypeTree* t);
TypeTree* max(TypeTree* t);
void ShowTree(TypeTree* t, int nivel);