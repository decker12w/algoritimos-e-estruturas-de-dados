#include "listaCadastral.h"

bool ListaCadastral::estaNaLista(int x) {
    atual = primeiro;
    while (atual != nullptr) {
        if (atual->info == x) {
            atual = primeiro;
            return true;
        }
        atual = atual->prox;
    }
    atual = primeiro;
    return false;
}

void ListaCadastral::insere(int x, bool& ok) {
    ok = false;
    if (cheia()) {
        return;
    }
    if (estaNaLista(x)) {
        return;
    }
    No* novo = new No;
    novo->info = x;
    novo->prox = nullptr;
    
    if (vazia()) {
        primeiro = novo;
    } else {
        No* aux;
        while (atual != nullptr) {
            aux = atual;
            atual = atual->prox;
        }
        aux->prox = novo;
    }
    ok = true;
    atual = primeiro;
}

void ListaCadastral::retira(int x, bool& ok) {
    ok = false;
    if (vazia()) {
        return;
    }
    if (primeiro->info == x) {
        No* aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
        ok = true;
        atual = primeiro;
        return;
    }
    No* anterior = primeiro;
    atual = primeiro->prox;
    while (atual != nullptr) {
        if (atual->info == x) {
            anterior->prox = atual->prox;
            delete atual;
            ok = true;
            atual = primeiro;
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
}

bool ListaCadastral::vazia() {
    return primeiro == nullptr ? true : false;
}

bool ListaCadastral::cheia() {
    return false;
}

void ListaCadastral::cria() {
    primeiro = nullptr;
    atual = nullptr;
}

void ListaCadastral::pegaOPrimeiro(int& x, bool& ok) {
    if (vazia()) {
        ok = false;
        return;
    }
    atual = primeiro;
    x = primeiro->info;
    ok = true;
}

void ListaCadastral::pegaOProximo(int& x, bool& ok) {
    ok = false;
    if (vazia()) {
        return;
    }
    atual = atual->prox;
    if (atual != nullptr) {
        x = atual->info;
        ok = true;
    }
}
