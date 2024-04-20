package javaa.Ordenacao;

public class BubbleSort {

  public static void sort(int[] array) {
    boolean swapped;

    for (int i = array.length - 1; i > 0; --i) {
      swapped = false;
      for (int j = 0; j < i; j++) {
        if (array[j] > array[j + 1]) {
          swapped = true;
          int aux = array[j + 1];
          array[j + 1] = array[j];
          array[j] = aux;
        }
      }
      if (!swapped) {
        break;
      }

    }

  }

  public static void main(String[] args) {

    int[] arr = { 1, 12, 22, 3, 4 };

    sort(arr);

    for (var i : arr) {
      System.out.println(i);
    }
  }
}
