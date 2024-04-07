#include <iostream>
#define maximo 10

class Fila{
    private:
        int elementos[maximo];
        int fim;
    public:
        void init(){
            for (int i = 0; i < maximo; i++){
                elementos[i] = 0;
            }
            fim = 0;
        }
        void inserir(int value){
            if (fim < maximo) {
                elementos[fim] = value;
                fim++;
            } else {
                std::cout << "A fila está cheia." << std::endl;
            }
        }
        void tirar(int& value){
            if (fim > 0) {
                value = elementos[0];
                for (int i = 0; i < fim - 1; i++) {
                    elementos[i] = elementos[i + 1];
                }
                fim--;
            } else {
                std::cout << "A fila está vazia." << std::endl;
            }
        }
};

int main(){
    Fila fila;
    fila.init();

    fila.inserir(1);
    fila.inserir(2);
    fila.inserir(3);

    int value;
    fila.tirar(value);
    std::cout << "Valor retirado: " << value << std::endl;

    return 0;
}
