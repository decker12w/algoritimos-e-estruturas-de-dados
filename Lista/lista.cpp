#include <iostream>

struct Node {
    int dado; 
    Node* prox;
};

class Lista{
    private:
        Node* primeiro;
        Node* atual; 
        
    public:
        Lista();
        void estaNaLista    (int x,bool &temElemento){};
        void pegaOprimeiro(int& x, bool &temElemento){};
        void pegaOProximo(int x, bool &temElemento){};
        void insere(int x, bool &temElemento){};
        void retira(int x, bool &temElemento){};
        bool vazio(){};
        bool cheio(){};
};

Lista::Lista(){
    primeiro = nullptr;
    atual = nullptr;
}

void Lista::insere(int x, bool &temElemento){

}

void Lista::retira(int x, bool &temElemento){

}

void Lista::estaNaLista(int x, bool &temElemento) {
    Node* ptr = atual;


    while (ptr != nullptr) {
        if (ptr->dado == x) {
            temElemento = true;
        }
        ptr = ptr->prox;
    }
    temElemento = false;
}
void Lista::pegaOprimeiro (int &x, bool &temElemento){
    atual = primeiro;
    if (atual == nullptr){
        temElemento = false;
        return;
    }
    x = atual->dado;
    temElemento = true;
}
bool Lista::cheio(){
    return false;
}
bool Lista::vazio(){
    if (primeiro == nullptr){
        return true;
    }
    return false;

}
void Lista::pegaOProximo (int x, bool &temElemento){
   
   if (atual == nullptr){
        temElemento = false ;
        return;
   }

   atual = atual->prox ;

   if (atual == nullptr ){
        temElemento = false;
        return;
   }

   x = atual->dado;
   temElemento = true;


}
