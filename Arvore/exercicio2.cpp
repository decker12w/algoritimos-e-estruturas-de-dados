const int max_sons = 4; // número máximo de filhos

struct _node
{
    int Info;                     // valor inteiro armazenado em cada nó
    struct _node *Sons[max_sons]; // ponteiros para os 4 filhos do nó
};

typedef struct _node node;
typedef struct _node *nodeptr;

nodeptr R4 = nullptr; // R4 é a raiz da árvore quaternária, que será oportunamente construída
int soma(nodeptr R4)
{
    if (R4 == nullptr)
    {
        return 0;
    }

    int total = R4->Info;

    for (int i = 0; i < max_sons; i++)
    {
        total += soma(R4->Sons[i]);
    }

    return total;
} //