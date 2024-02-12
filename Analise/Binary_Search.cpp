#include <iostream>
#include <vector>

int binarySearch(std::vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // target not found
}

int _BinarySearch(int vect[], int left, int right, int x)
{
    if (left > right)
        return -1;
    int mid = (left + right) / 2;

    if (vect[mid] == x)
    {
        return mid;
    }
    if (x > vect[mid])
    {
        return _BinarySearch(vect, mid + 1, right, x);
    }
    else
    {
        return _BinarySearch(vect, left, mid - 1, x);
    }
}

int BinarySearch(int vect[], int n, int x)
{
    return _BinarySearch(vect, 0, n - 1, x);
}

int main(int argc, char const *argv[])
{
    int vect[10] = {10, 20, 22, 29, 34, 47, 56, 70, 80, 99};

    std::cout << BinarySearch(vect, 10, 47);

    return 0;
}
