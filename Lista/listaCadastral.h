struct No {
int info;
No* prox;

};

class ListaCadastral {
private:
No* primeiro;
No* atual;

public:
bool estaNaLista(int x);
void insere(int x, bool& ok);
void retira(int x, bool& ok);
bool vazia();
bool cheia();
void cria();
void pegaOPrimeiro(int& x, bool& temElemento);
void pegaOProximo(int& x, bool& temElemento);

};