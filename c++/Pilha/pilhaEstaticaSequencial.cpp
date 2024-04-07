#include <iostream>
#define maximo 10
class Pilha {
    private:
        int elementos[maximo];
        int top;
    public:
        void init(){
            top = 0;
        }
        void push(int data){
            if ( top == maximo){
                std::cout << "A pilha está cheia" << std::endl;
            }
            else {
                elementos[top] = data;
                top++;
            }
        }

        void pop(int *data) {
            if ( top <= 0){
                std::cout << "Está vazia" << std::endl;
            }
            else {
                top--;
                *data = elementos[top];
                elementos[top] = 0;
            }
        }

        bool vazio (){
            return (top == 0);
        }

        bool cheio (){
            return (top == maximo);
        }

        void imprimirPilha(){
            while(!vazio()){
                int data;
                pop(&data);
                std::cout << data << std::endl;
            }
        }
};

int main(){
    Pilha pip;
    int data;
    pip.init(); // Inicialize a pilha

    pip.push(2);
    pip.push(2);
    pip.push(2);
    pip.push(23);
    pip.push(0);
    pip.pop(&data);
    pip.imprimirPilha();

    return 0;
}
