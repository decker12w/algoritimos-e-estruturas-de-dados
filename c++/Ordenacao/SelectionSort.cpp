#include <iostream>

void selectionSort(int array[])
{

    int tamanho = sizeof(array) / array[0];

    for (int i = 0; i < tamanho; i++)
    {
        int menor = i;

        for (int j = 0; j < tamanho; j++)
        {
            if (array[menor] > array[j])
            {
                menor = j;
            }
        }
        int aux = array[i];
        array[i] = array[menor];
        array[menor] = aux;
    }
}

/*Desempenho de tempo:

O(n2) em qualquer caso – ex.: vetor ordenado ou invertido

em todas as iterações do laço externo, o laço interno
realiza o número máximo de iterações

1 + 2 + 3+... n-3 + n-2 + n-1

n(1+ (n – 1)) / 2 // Soma-da-PA = ( n* (a1 + an) ) / 2

= n2 / 2

= O(n2)*/