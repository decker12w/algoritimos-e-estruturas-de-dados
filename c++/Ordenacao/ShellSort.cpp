#include <iostream>
#include <vector>

void shellSort(std::vector<int> lista, int tam) {

  int h = h / 2;

  while (h > 0) {
    for (int i = h; i < tam; i++) {
      int tmp = lista[i];
      int j = i;
      while (j >= h && lista[j - h] > tmp) {
        lista[j] = lista[j - h];
        j = j - h;
      }
      lista[j] = tmp;
    }
    h = h / 2;
  }
}

int main() {
  std::vector<int> lista = {7, 2, 4, 5};
  shellSort(lista, lista.size());
  for (int i = 0; i < lista.size(); i++) {
    std::cout << lista[i] << " ";
  }
}
