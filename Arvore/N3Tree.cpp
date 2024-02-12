#include <iostream>

const int max = 3;

struct Node
{
    int data;
    Node *Sons[max];
};

void inserir(Node *&raiz, int x)
{
    if (raiz == nullptr)
    {
        raiz = new Node;
        raiz->data = x;
        for (int i = 0; i < 3; i++)
        {
            raiz->Sons[i] = nullptr; // Use = em vez de ==
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (raiz->Sons[i] == nullptr) // Verifique se o filho é nullptr antes de acessar seu campo data
            {
                raiz->Sons[i] = new Node; // Aloca memória para o novo nó
                raiz->Sons[i]->data = x;
                for (int j = 0; j < 3; j++)
                {
                    raiz->Sons[i]->Sons[j] = nullptr; // Inicializa os filhos do novo nó para nullptr
                }
                return;
            }
        }
    }
}

void mostrar(Node *raiz)
{
    if (raiz == nullptr)
    {
        return;
    }
    std::cout << raiz->data << std::endl;
    for (int i = 0; i < max; i++)

        mostrar(raiz->Sons[i]);
}

int main()
{
    Node *raiz = nullptr;
    inserir(raiz, 10);
    inserir(raiz->Sons[0], 106); // Insere 106 como filho do nó 10
    inserir(raiz, 12);
    inserir(raiz, 13);
    mostrar(raiz);
}