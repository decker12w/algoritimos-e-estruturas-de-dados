#include <iostream>

const int maximo = 2;

class Fila {
private:
    int elementos[maximo];
    int fim;
    int inicio;

public:
    Fila() {
        inicio = 0;
        fim = 0;
    }

    bool estaVazia() {
        return inicio == fim;
    }

    bool estaCheia() {
        return (fim + inicio) == maximo;
    }

    void enfileirar(int item) {
        if (estaCheia()) {
            std::cout << "A fila está cheia. Não é possível adicionar mais elementos." << std::endl;
            return;
        }
        elementos[fim%maximo] = item;
        fim++;
        // fim = (fim + 1) % maximo; // Avança o índice do fim, considerando a circularidade
    }

    int desenfileirar() {
        if (estaVazia()) {
            std::cout << "A fila está vazia. Não é possível remover elementos." << std::endl;
            return -1; // Valor padrão se a fila estiver vazia
        }
        int item = elementos[inicio%maximo];
        inicio++;
        // inicio = (inicio + 1) % maximo; // Avança o índice do início, considerando a circularidade
        return item;
    }
};

int main() {
    Fila fila;

    fila.enfileirar(1);
    fila.enfileirar(2);

    std::cout << "estaCheia: " << fila.estaCheia() << std::endl;
    std::cout << "estaVazia: " << fila.estaVazia() << std::endl;
    
    while (!fila.estaVazia()){
        std::cout << "Elemento desenfileirado: " << fila.desenfileirar() << std::endl;
    }

    return 0;
}
