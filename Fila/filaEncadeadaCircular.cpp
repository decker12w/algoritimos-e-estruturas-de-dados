#include <iostream>

struct Node {
    int info;
    Node* prox;
};

class Fila {
    private:
        Node* inicio;
        Node* fim; 
    public:
        Fila() { // Construtor para inicializar a fila
            inicio = nullptr;
            fim = nullptr;
        }

        bool cheio() {
            // Não estamos rastreando o tamanho da fila, então você pode retornar sempre falso.
            return false;
        }

        bool vazio() {
            return (inicio == nullptr);
        }

        void insere(int x, bool &deuCerto) {
            Node* ptrNovo = new Node;
            ptrNovo->info = x;
            ptrNovo->prox = nullptr;
            
            if (cheio()) {
                deuCerto = false;
            } else {
                if (vazio()) {
                    inicio = ptrNovo;
                    fim = ptrNovo;
                } else {
                    fim->prox = ptrNovo;
                    fim = ptrNovo;
                }
                deuCerto = true;
            }
        }

void remove(int &x, bool &deuCerto) {
    if (vazio()) {
        deuCerto = false;
    } else {
        Node* ptrNovo = inicio;
        x = ptrNovo->info;
        inicio = ptrNovo->prox;
        delete ptrNovo;
        deuCerto = true;
    }
}

}

;

int main() {
    Fila fila1;
    bool deuCerto;
    std::cout << fila1.cheio() << std::endl;
    std::cout << fila1.vazio() << std::endl;
    int x;
    fila1.insere(2, deuCerto);
    fila1.insere(3, deuCerto);
    fila1.insere(4, deuCerto);
    fila1.insere(5, deuCerto);
    fila1.remove(x,deuCerto);
    fila1.remove(x,deuCerto);
    fila1.remove(x,deuCerto);
    fila1.insere(2, deuCerto);
    fila1.insere(3, deuCerto);
    fila1.insere(4, deuCerto);
    fila1.insere(5, deuCerto);

    while (!fila1.vazio()) {
    int x;
    bool deuCerto;
    fila1.remove(x, deuCerto);
    if (deuCerto) {
        std::cout << x << std::endl;
    } else {
        std::cout << "Erro ao remover." << std::endl;
    }
}

}

