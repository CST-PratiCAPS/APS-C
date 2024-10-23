#include <stdio.h>
#include <stdlib.h>

void insert(int *vet, int size){
    register int a, b; 
    int t;
    for(a=1; a<size; a++){
        t = vet[a];
        for(b=a-1; b>=0 && t<vet[b]; b--) 
            vet[b+1] = vet[b];
        vet[b+1] = t;
    }
}

int main(void){
    FILE *ptrArq;
    ptrArq = fopen("dtaleat1kdup0.txt","rb");
    int vet[10000];
    int size = 0;
    int value = 0;
    if (ptrArq == NULL){
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }
    while(fscanf(ptrArq, "%i", &value) == 1){
        vet[size++] = value;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n agora ordenado \n");
    
    insert(vet, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
}