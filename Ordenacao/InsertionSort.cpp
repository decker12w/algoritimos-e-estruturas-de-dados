// Melhor caso
#include <iostream>
#include <vector>
//{7,2,4,5}
void insertionSort(std::vector<int> vect)
{
    int tamanho = vect.size(); // O(1)

    for (int i = 1; i < tamanho; i++) // O(n)
    {
        int key = vect[i]; // O(1)
        int j = i - 1;     // O(1)

        // No melhor caso, esta condição sempre será falsa
        // porque o array já está ordenado. Portanto, o loop não será executado.
        while (j >= 0 && vect[j] > key)
        {
            vect[j + 1] = vect[j]; // O(1)
            j--;                   // O(1)
        }
        vect[j + 1] = key; // O(1)
    }
}
// Complexidade no melhor caso = 6*O(1) + O(n) = O(n)

// Pior caso
#include <iostream>
#include <vector>
void insertionSort(std::vector<int> vect)
{
    int tamanho = vect.size(); // O(1)

    for (int i = 1; i < tamanho; i++) // O(n)
    {
        int key = vect[i]; // O(1)
        int j = i - 1;     // O(1)

        /* No pior caso ele vai executar esse loop em todos os casos logo o tempo de
         execução será O(N)*/
        while (j >= 0 && vect[j] > key)
        {
            vect[j + 1] = vect[j]; // O(1)
            j--;                   // O(1)
        }
        vect[j + 1] = key; // O(1)
    }
}

// Complexidade no pior caso = 6*O(1) + O(n) * O(n) = O(n²)

// Análise de correção
/*O subvetor ordenado que está sendo construido a cada iteração será o invariante, uma vez que,
na primeira iteração ele já estará ordenado, já que um vetor de um unico elemento so precisa
de apenas um elemento para estar ordenado, na segunda iteração o while colocará todos elementos na posição correta,
e na ultima iteração ele estará todo ordenando com todos os elementos do vetor base
*/
