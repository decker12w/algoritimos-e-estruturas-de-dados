#include <iostream>
struct Node
{
    int data;
    Node *prox;
};

class Fila
{

private:
    Node *inicio;
    Node *fim;

public:
    Fila() // Add constructor to initialize pointers
    {
        inicio = nullptr;
        fim = nullptr;
    }

    bool vazia()
    {
        return (inicio == nullptr);
    }
    void push(int data, bool &ok)
    {
        if (vazia())
        {
            Node *novo = new Node();
            novo->data = data;
            inicio = novo;
            fim = novo;
        }
        else
        {
            Node *novo = new Node();
            novo->data = data;

            if (data > 60)
            {
                if (inicio->data < data)
                {
                    novo->prox = inicio;
                    inicio = novo;
                }
                else
                {
                    Node *aux = inicio;
                    while (aux->prox && aux->prox->data >= data)
                    {
                        aux = aux->prox;
                    }
                    novo->prox = aux->prox;
                    aux->prox = novo;
                }
            }
            else
            {
                fim->prox = novo;
                fim = novo;
                novo->prox = nullptr;
            }
        }
    }

    void mostrar()
    {
        Node *aux = inicio;
        while (aux != nullptr)
        {
            std::cout << aux->data << std::endl;
            aux = aux->prox;
        }
    }
};

int main()
{
    Fila f1;
    bool ok;

    f1.push(10, ok);
    f1.push(11, ok);
    f1.push(65, ok);
    f1.push(12, ok);
    f1.push(65, ok);
    f1.push(165, ok);
    f1.mostrar();
}