#include <iostream>
#include <vector>
#include <algorithm>

class Heap
{
private:
    std::vector<int> heap;
    int HeapNumber;

public:
    int parent(int i);
    int lchild(int i);
    int rchild(int i);
    void HeapUp(int pos);
    int insert(int number, int nro_elementos);
    void HeapDown();
};

int Heap::parent(int i)
{
    return (i - 1) / 2;
}
int Heap::lchild(int i)
{
    return (2 * i + 1);
}
int Heap::rchild(int i)
{
    return (2 * i + 2);
}

void Heap::HeapUp(int pos)
{
    int pai = parent(pos);

    while (pos > 0 && heap[pai] < heap[pos])
    {
        int aux = heap[pai];
        heap[pai] = heap[pos];
        heap[pos] = aux;

        pos = pai;
        pai = parent(pos);
    }
}

int Heap::insert(int number, int nro_elementos)
{

    if (nro_elementos >= heap.size())
    {
        heap.resize(nro_elementos + 1);
    }

    heap[nro_elementos] = number;
    HeapUp(nro_elementos);
    return nro_elementos + 1;
}
int main()
{
    std::cout << "dsds" << std::endl;
}