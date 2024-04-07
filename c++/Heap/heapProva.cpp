void HeapUp(int vect[],int size,int pos){
int pai = (pos-1)/2;
    while(pos > 0 && vect[pai] < vect[pos]){
        int aux = vect[pai];
        vect[pai] = vect[pos];
        vect[pos] = aux;
        pos = pai;
        pos = pai;
        pai = (pos - 1) / 2;
}
}

void HeapDown(int vect[],int pos,int size){
    int maior = pos;
    int filhoEsq = 2*pos+1;
    int filhoDir = 2*pos+2;

    if(filhoEsq < size &&vect[pos] < vect[filhoEsq]){
        maior = filhoEsq;
    }
    if(filhoDir < size && vect[pos] < vect[filhoDir]){

        maior = filhoDir;
    }

    if(maior != pos){
        int temp = vect[pos];
        vect[pos] = vect[maior];
        vect[maior] = temp;

        HeapDown(vect,maior,size);
    }

}