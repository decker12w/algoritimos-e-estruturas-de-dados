#include <iostream>

const int maximo = 5; // Alterado para 5

int fillPrefixSum(int arr[], int start, int end) 
{
    int prefixSum[maximo];
    prefixSum[0] = arr[0];

    for (int i = 1; i < maximo; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];

    if (start == 0) {
        return prefixSum[end];
    } else {
        return prefixSum[end] - prefixSum[start - 1];
    }
}

int main() 
{
    int arr[] = {0, 1, 2, 3, 4};
    
    std::cout << fillPrefixSum(arr, 0, 2) << std::endl;

    return 0;
}
