package javaa.Ordenacao;

public class QuickSort {

  // Impressão do vetor ordenado
  public static void main(String[] args) {
    int[] vetor = { 29, 12, 3, 7, 2, 17, 4, 19, 42, 31, 20, 15, 10, 9, 16, 8, 1, 13, 21, 5 };
    quickSort(vetor, 0, vetor.length - 1);

    for (int i = 0; i < vetor.length; i++) {
      System.out.print(vetor[i] + " ");
    }
  }

  // Função utilitária para trocar dois elementos de posição
  private static void swap(int[] vetor, int a, int b) {
    int aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
  }

  // Função que particiona o vetor e retorna o índice do pivô
  private static int partition(int[] vetor, int low, int high) {
    int x = vetor[high]; // Pivô
    int i = low - 1; // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
      /*
       * Percorre o vetor e verica se o elemento é menor ou igual ao pivô caso a
       * condição seja verdadeira incrementa o índice do menor elemento e troca o
       * valor atual pelo valor incrementado do índice do menor elemento. Dessa
       * forma,mantendo os elementos menores e maiores que o pivô separados.
       * 
       */
      if (vetor[j] <= x) {
        i++;
        swap(vetor, i, j);
      }
    }

    /*
     * Coloca o pivô após o ultimo elemento selecionado como menor elemento,
     * separando o vetor em elementos
     * menores e maiores que o pivô
     */
    swap(vetor, i + 1, high);
    /*
     * Retorna o índice do pivô para que seja chamado recursivamente dentro da
     * função quickSort forcenendo a localização dos demais pivos que serão
     * utilizados para criar outras partições aas quais serão ordenadas
     */
    return (i + 1);
  }

  // Função que ordena o vetor
  private static void quickSort(int[] vetor, int low, int high) {

    // Enquanto o índice do menor elemento for menor que o índice do maior elemento
    // significa que o vetor ainda não está ordenado e que ainda há ṕartições a
    // serem formadas.
    if (low < high) {
      // Obtém o índice do pivô e cria partições
      int pi = partition(vetor, low, high);

      // Chama recursivamente quicksort a esquerda do pivô para ordernar os elementos
      // menores do que ele
      quickSort(vetor, low, pi - 1);
      // Chama recursivamente quicksort a direita do pivô para ordernar os elementos
      // maiores do que ele
      quickSort(vetor, pi + 1, high);
    }

  }

}
