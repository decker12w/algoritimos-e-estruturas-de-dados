#include <iostream>
#include <vector>

int buscaSequencial(std::vector<int> lista, int numeroBuscado) {
  bool achou = false;
  int count = 0;
  int pos;
  while (count < lista.size() && !achou) {
    if (lista[count] == numeroBuscado) {
      achou = true;
      pos = count;
    } else {

      count++;
    }
  }

  if (achou) {
    return pos;
  } else {
    return -1;
  }
};

int main(int argc, char *argv[]) {
  std::vector<int> lista = {1, 3, 4, 1, 3, 5, 6, 7, 8, 9, 0};

  int numeroBuscado = 5;
  int pos = buscaSequencial(lista, numeroBuscado);
  ((pos > -1) ? std::cout << "O número " << numeroBuscado << " está na posição "
                          << pos << std::endl
              : std::cout << "O número " << numeroBuscado
                          << " não está na lista" << std::endl);
  return 0;
}
