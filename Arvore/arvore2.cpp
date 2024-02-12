#include <iostream>

struct Node
{
    int data;
    Node *esq;
    Node *dir;
};

void inserir(int dado, Node **no)
{
    if (*no == nullptr)
    {
        Node *novo = new Node();
        novo->data = dado;
        novo->esq = nullptr;
        novo->dir = nullptr;
        *no = novo;
    }
    else
    {
        if (dado < (*no)->data)
            inserir(dado, &(*no)->esq);
        else
            inserir(dado, &(*no)->dir);
    }
}

void remover(Node **raiz, int x)
{
    if (raiz == nullptr)
    {
        return;
    }
    else
    {
        if ((*raiz)->data == x)
        {
            if ((*raiz)->dir == nullptr && (*raiz)->esq == nullptr)
            {
                delete raiz;
                raiz = nullptr;
            }
            else if ((*raiz)->esq && (*raiz)->dir == nullptr)
            {
                Node *ptr = (*raiz);
                *raiz = (*raiz)->esq;
                delete ptr;
            }

            else if ((*raiz)->dir && (*raiz)->esq == nullptr)
            {
                Node *ptr = (*raiz);
                *raiz = (*raiz)->dir;
                delete ptr;
            }
            else
            {
                Node *ptr = (*raiz)->esq;
                while (ptr->dir != nullptr)
                {
                    ptr = ptr->dir;
                }
                (*raiz)->data = ptr->data;
                remover(&(*raiz)->esq, ptr->data);
            }
        }
        else
        {
            if ((*raiz)->data > x)
            {
                remover(&(*raiz)->esq, x);
            }
            else
            {
                remover(&(*raiz)->dir, x);
            }
        }
    }
}
void imprimirOrdem(Node *raiz)
{

    if (raiz == nullptr)
    {
        return;
    }

    imprimirOrdem(raiz->esq);
    std::cout << raiz->data << std::endl;
    imprimirOrdem(raiz->dir);
}

int main()
{
    Node *raiz = nullptr;
    inserir(10, &raiz);
    inserir(124234320, &raiz);
    inserir(1330, &raiz);
    remover(&raiz, 10);
    inserir(11310, &raiz);
    imprimirOrdem(raiz);
}