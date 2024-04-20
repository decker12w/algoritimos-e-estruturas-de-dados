package javaa.Ordenacao;

public class ShellSort {

  // Método de ordenação ShellSort
  public static void sort(int[] arr, int tam) {

    // Obtem o valor do gap inicial da sequencial shell
    int h = tam / 2;

    // O laço será executada até que o gap seja igual a 0, que ocorrerá na penultima
    // execução onde o gap será equivalente ao insertion sort, após essa
    // iteração o h será dividio uma ultima vez por 2 resultando em 0 e finalizando
    // o laço
    //
    while (h > 0) {

      // Laço para percorrer o vetor dentro dos gaps determinados por h
      for (int i = h; i < tam; i++) {

        // Variavel auxiliar para armazenar o valor de i
        int j = i;

        // Variavel auxiliar para armazenar o valor do vetor na posição i
        int aux = arr[i];

        // O loop continua enquanto 'j' é maior ou igual ao gap 'h' e o elemento na
        // posição 'j - h' é maior que 'aux'.
        // 'aux' é o elemento que estamos tentando colocar na posição correta dentro do
        // gap atual.
        // Se o elemento na posição 'j - h' é maior que 'aux', nós movemos esse elemento
        // para frente (para a posição 'j'),
        // e então diminuímos 'j' pelo tamanho do gap 'h'. Isso efetivamente move o
        // índice 'j' para trás no gap.
        // Continuamos esse processo até encontrar a posição correta para 'aux' (ou
        // seja, quando o elemento na posição 'j - h' não é mais maior que 'aux').
        // Isso garante que, para cada iteração do gap, os elementos dentro do gap estão
        // ordenados.

        while (j >= h && arr[j - h] > aux) {
          arr[j] = arr[j - h];
          j = j - h;
        }
        // Insere o valor de aux na posição correta dentro do gap.
        arr[j] = aux;
      }
      // Divisão do gap por 2 para a proxima iteração seguindo a sequencia de shell
      h = h / 2;

    }

  }

  // Impressão do vetor ordenado
  public static void main(String[] args) {
    int[] arr = { 29, 12, 3, 7, 2, 17, 4, 19, 42, 31, 20, 15, 10, 9, 16, 8, 1, 13, 21, 5 };
    sort(arr, arr.length);

    for (int i : arr) {
      System.out.print(i + " ");
    }
  }
}
