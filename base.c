#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *ptrArq;
    ptrArq = fopen("dtaleat1kdup0.txt","rb");
    int vet[10000];
    int size = 0;
    int value = 0;
    while(fscanf(ptrArq, "%i", &value) == 1){
        vet[size++] = value;
    }
    insert(0, size);
}

void insert(int *vet, int size){
    register int a, b; 
    char t;
    for(a=1; a<size; a++){
        t = vet[a];
        for(b=a-1; b>=0 && t<vet[b]; b--) 
            vet[b+1] = vet[b];
        vet[b+1] = t;
    }
}