#include <iostream>
#include <vector>

int _binarrySearch(std::vector<int> lista, int elementoProcurado, int inicio,
                   int fim) {

  int meio = inicio + (fim - inicio) / 2;
  if (inicio > fim) {
    return -1;
  }

  if (lista[meio] == elementoProcurado) {
    return meio;
  }

  else if (elementoProcurado > lista[meio]) {
    return _binarrySearch(lista, elementoProcurado, meio + 1, fim);
  }

  else {
    return _binarrySearch(lista, elementoProcurado, inicio, meio - 1);
  }
}
