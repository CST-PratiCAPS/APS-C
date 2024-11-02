#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Método de ordenação (única parte que será alterada do código original vai ser alguns nomes de varáveis, aqui sendo o VET e SIZE)
void insert(int *vet, int size){
    register int a, b;
    int t;
    for (a = 1; a < size; a++)
    {
        t = vet[a];
        for (b = a - 1; b >= 0 && t < vet[b]; b--)
            vet[b + 1] = vet[b];
        vet[b + 1] = t;
    }
}

void quick(){
    printf("ainda nao disponivel");
}

void merge(){
    printf("ainda nao disponivel");
}

void abb(){
    printf("ainda nao disponivel");
}


int main(void)
{

    // Declarando as variáveis
    int vet[100000];
    int size = 0;
    int value = 0;
    int dataSize;
    int duplicate;
    int dbForm;
    int order;

    // Abrindo a base de dados
    FILE *ptrArq;

    // Abrindo o arquivo onde vai salvar as escolhas do usuário e o tempo
    FILE *saveFile;
    saveFile = fopen("arquivo.txt", "a");
    

    printf("\nEscolha o tamanho da base que deseja testar:\n1 - 10 dados\n2 - 50 dados\n3 - 100\n4 - 500 dados\n5 - 1k dados\n6 - 5k dados\n7 - 10k dados\n8 - 50k dados\n9 - 100k dados\n");
    scanf("%d", &dataSize);
    switch (dataSize)
    {
    case 1:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat10dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv10dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx10dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc10dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre10dup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat10uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv10uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx10uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc10uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre10uni0.txt", "rb");
                break;
            }break;
        }break;

    case 2:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat50dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv50dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx50dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc50dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre50dup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat50uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv50uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx50uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc50uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre50uni0.txt", "rb");
                break;
            }break;
        }break;

    case 3:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat100dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv100dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx100dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc100dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre100dup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat100uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv100uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx100uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc100uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre100uni0.txt", "rb");
                break;
            }break;
        }break;

    case 4:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat500dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv500dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx500dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc500dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre500dup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat500uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv500uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx500uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc500uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre500uni0.txt", "rb");
                break;
            }break;
        }break;

    case 5:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat1kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv1kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx1kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc1kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre1kdup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat1kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv1kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx1kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc1kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre1kuni0.txt", "rb");
                break;
            }break;
        }break;
    case 6:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat5kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv5kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx5kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc5kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre5kdup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat5kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv5kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx5kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc5kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre5kuni0.txt", "rb");
                break;
            }break;
        }break;

    case 7:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat10kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv10kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx10kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc10kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre10kdup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat10kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv10kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx10kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc10kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre10kuni0.txt", "rb");
                break;
            }break;
        }break;

    case 8:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat50kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv50kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx50kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc50kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre50kdup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat50kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv50kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx50kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc50kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre50kuni0.txt", "rb");
                break;
            }break;
        }break;

    case 9:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat100kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv100kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx100kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc100kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre100kdup0.txt", "rb");
                break;
            }break;

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", &dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("dtaleat100kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("dtconcv100kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("dtconvx100kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("dtcresc100kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("dtdecre100kuni0.txt", "rb");
                break;
            }break;
        }break;
    }

//Teste se o arquivo foi encontrado
    if (ptrArq == NULL)
    {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }

    // Inserindo a base de dados no vetor
    while (fscanf(ptrArq, "%i", &value) == 1)
    {
        vet[size++] = value;
    }

    // Mostrando o vetor desordenado
    printf("\nValores desordenados:----------------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", vet[i]);
    }

    // Contagem de tempo e ordenação
    printf("\nEscolha o tipo de ordenacao que voce deseja testar:\n1 - InsertionSort\n2 - QuickSort\n3 - MergeSort\n4 - ABBsort\n");
    scanf("%d", &dataSize);
  
    switch (dataSize){
        case 1:
            clock_t tempo = clock();
            insert(vet, size);
            clock_t tempo2 = clock();

            // Mostra o tempo gasto
            float r = tempo2 - tempo;
            printf("\n%d %d", tempo, tempo2);
            printf("\nclock: %2.20f", r / CLOCKS_PER_SEC);
            fprintf(saveFile, "\ntempo de ordenação: %2.20f", r);

            // Salvando tempo da ordenação
            
        
    }
   
    fprintf(saveFile, "\nduplicado: %d", duplicate);
    fprintf(saveFile, "\ntamanho da base de dados: %d", dataSize);
    fprintf(saveFile, "\nformato da base de dados: %d\n", dbForm);

    // Mostrando o vetor ordenado
    printf("\ndeseja ver o vetor ordenado?\n1 - sim\n0 - nao\n");
    int vetord;
    bool ordvet;
    scanf("%d", &vetord);
    ordvet = vetord;
    if (ordvet == true){
        printf("\nVetor ordenado:-----------------------------------------------------------------------------------\n");
        for (int i = 0; i < size; i++){
            printf("%d ", vet[i]);
        }
    }
}