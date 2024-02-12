void desceHeap(int v[], int nro_elementos, int pos)
{
    int maior = pos;
    int filhoEsq = 2 * pos + 1;
    int filhoDir = 2 * pos + 2;

    if (filhoEsq < nro_elementos && v[filhoEsq] > v[maior])
        maior = filhoEsq;

    if (filhoDir < nro_elementos && v[filhoDir] > v[maior])
        maior = filhoDir;

    if (maior != pos)
    {

        int temp = v[pos];
        v[pos] = v[maior];
        v[maior] = temp;

        desceHeap(v, nro_elementos, maior);
    }
}

int removeMax(int v[], int &nro_elementos)
{
    if (nro_elementos <= 0)
        return -1; // ou lance uma exceção

    if (nro_elementos == 1)
    {
        nro_elementos--;
        return v[0];
    }

    // Armazene o valor máximo e substitua-o pelo último elemento no heap
    int max = v[0];
    v[0] = v[nro_elementos - 1];
    nro_elementos--;

    // Restaure a propriedade de heap
    desceHeap(v, nro_elementos, 0);

    return max;
}