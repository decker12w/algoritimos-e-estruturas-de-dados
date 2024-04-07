#include <iostream>

class Fila {
private:
    int* valores;
    int tam;

public:
    Fila(int tamanho) {
        if (tamanho < 0) {
            std::cout << "Incorreto";
        } else {
            valores = new int[tamanho];

            for (int i = 0; i < tam; i++) {
                valores[i] = 0;
            }
        }
    }

    void inserir(int value) {
        if (tam < maximo) {
            elementos[tam] = value;
            tam++;
        } else {
            std::cout << "A fila está cheia." << std::endl;
        }
    }

    void tirar(int& value) {
        if (tam > 0) {
            value = elementos[0];
            for (int i = 0; i < tam - 1; i++) {
                elementos[i] = elementos[i + 1];
            }
            tam--;
        } else {
            std::cout << "A fila está vazia." << std::endl;
        }
    }
};

int main() {
    Fila fila;

    fila.enfileirar(1);
    fila.enfileirar(2);

    std::cout << "estaCheia: " << fila.estaCheia() << std::endl;
    std::cout << "estaVazia: " << fila.estaVazia() << std::endl;

    while (!fila.estaVazia()) {
        std::cout << "Elemento desenfileirado: " << fila.desenfileirar() << std::endl;
    }

    return 0;
}
