#include <iostream>
#include <vector>

void BubbleSort(std::vector<int> &vect)
{
    int n = vect.size();
    bool swapped;
    for (int i = n - 1; i > 0; i--)
    {
        swapped = false;
        for (int j = 0; j < i; j++)
        {
            if (vect[j] > vect[j + 1])
            {
                int aux = vect[j + 1];
                vect[j + 1] = vect[j];
                vect[j] = aux;
                swapped = true;
            }
        }

        if (!swapped)
            return;
    }
}

int main()
{
    std::vector<int> vetor = {9, 3, 2, 4, 8, 1};
    BubbleSort(vetor);
    for (int x : vetor)
    {
        std::cout << x << " ";
    }

    return 0;
}