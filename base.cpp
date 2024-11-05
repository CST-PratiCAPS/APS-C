#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// M�todo de ordena��o (�nica parte que ser� alterada do c�digo original vai ser alguns nomes de var�veis, aqui sendo o VET e SIZE)
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

//O m�todo merge ir� dividir um array em partes menores para realizar a ordena�ao. E em seguida ir� juntar as subpartes em uma parte j� ordernada.
void merge(int *vet, int ini, int med, int end) {
     int n1 = ini, n2 = med+1, nAux = 0;
     int* vetAux = new int[end - ini + 1];
     while(n1<=med && n2<=end){
		if(vet[n1] <= vet[n2]){
			vetAux[nAux] = vet[n1];
			n1++;
		}else{
			vetAux[nAux] = vet[n2];
			n2++; 
		}
		nAux++;
	}
	while(n1<=med){ 
		//Caso ainda haja elementos na primeira metade
		vetAux[nAux] = vet[n1];
		nAux++;n1++;
	}
	while(n2<=end){ 
		//Caso ainda haja elementos na segunda metade
		vetAux[nAux] = vet[n2];
		nAux++;n2++;
	}
	for(nAux = 0; nAux < end - ini + 1; nAux++){ 
		//Move os elementos de volta para o vetor original
		vet[ini + nAux] = vetAux[nAux];
	}
}

void mergeSort(int* vet, int ini, int end){
    if (ini < end) {
        int med = (ini+end)/2;
        mergeSort(vet, ini, med);
        mergeSort(vet, med+1, end);
        merge(vet, ini, med, end);
    }
}

void abb(){
    printf("ainda nao disponivel");
}


int main(void)
{

    // Declarando as vari�veis
    int vet[100000];
    int size = 0;
    int value = 0;
    int dataSize;
    int duplicate;
    int dbForm;
    int sort;
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - N�o");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
                ptrArq = fopen("dtdecre1000uni0.txt", "rb");
                break;
            }break;
        }break;

    case 4:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Nao");
        scanf("%d", &duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatoria\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
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
    printf("\nDeseja ver a base de dados desordenada?\nY / T - Sim\nN / F - Nao\n");
    bool verDesordem;
    char temp;
    scanf("%s", &temp);

    if (temp == 'Y' || temp == 'T') {
        for (int i = 0; i < size; i++){
            printf("%d ", vet[i]);
        }
    } else {
        verDesordem = false;
    }
    

    // Contagem de tempo e ordena��o
    printf("\nEscolha o tipo de ordenacao que voce deseja testar:\n1 - InsertionSort\n2 - QuickSort\n3 - MergeSort\n4 - ABBsort\n");
    scanf("%d", &sort);
  
    switch (sort){
        case 1:{
            clock_t tempo = clock();
            insert(vet, size);
            clock_t tempo2 = clock();

            // Mostra o tempo gasto
            float r = tempo2 - tempo;
            printf("\n%d %d", tempo, tempo2);
            printf("\nclock: %2.10f", r / CLOCKS_PER_SEC);

            //salvando o tempo de ordenacao
            fprintf(saveFile, "\ntempo de ordenação: %2.20f", r);

            break;}

        case 3:{
            clock_t tempo = clock();
            mergeSort(vet, 0, size - 1);
            clock_t tempo2 = clock();

            // Mostra o tempo gasto
            float r = tempo2 - tempo;
            printf("\n%d %d", tempo, tempo2);
            printf("\nclock: %2.10f", r / CLOCKS_PER_SEC);

            //salvando o tempo de ordenacao
            fprintf(saveFile, "\ntempo de ordenação: %2.20f", r);

            break;}
    }
    
    //Salvando escolhas do usuario no arquivo.txt, para que seja mais facil de fazer a planilha
    switch (sort){
    case 1:
        fprintf(saveFile, "\nmétodo de ordanação: Insertion");
        break;
    case 2:
        fprintf(saveFile, "\nmétodo de ordanação: Quick");
        break;
    case 3:
        fprintf(saveFile, "\nmétodo de ordanação: Merge");
        break;
    case 4:
        fprintf(saveFile, "\nmétodo de ordanação: ABB");
        break;
    }
    
    switch (duplicate){
    case 1:
        fprintf(saveFile, "\nduplicado: Sim");
        break;
    case 2:
        fprintf(saveFile, "\nduplicado: Não");
        break;
    }
    
    switch (dataSize){
    case 1:
        fprintf(saveFile, "\ntamanho da base de dados: 10 dados");
        break;
    case 2:
        fprintf(saveFile, "\ntamanho da base de dados: 50 dados");
        break;
    case 3:
        fprintf(saveFile, "\ntamanho da base de dados: 100 dados");
        break;
    case 4:
        fprintf(saveFile, "\ntamanho da base de dados: 500 dados");
        break;
    case 5:
        fprintf(saveFile, "\ntamanho da base de dados: 1.000 dados");
        break;
    case 6:
        fprintf(saveFile, "\ntamanho da base de dados: 5.000 dados");
        break;
    case 7:
        fprintf(saveFile, "\ntamanho da base de dados: 10.000 dados");
        break;
    case 8:
        fprintf(saveFile, "\ntamanho da base de dados: 50.000 dados");
        break;
    case 9:
        fprintf(saveFile, "\ntamanho da base de dados: 100.000 dados");
        break;
    }
 
    switch (dbForm){
    case 1:
        fprintf(saveFile, "\nformato da base de dados: Aleatório");
        break;
    case 2:
        fprintf(saveFile, "\nformato da base de dados: Concavo");
        break;
    case 3:
        fprintf(saveFile, "\nformato da base de dados: Covexo");
        break;
    case 4:
        fprintf(saveFile, "\nformato da base de dados: Crescente");
        break;
    case 5:
        fprintf(saveFile, "\nformato da base de dados: Decrescente");
        break;
    }

    // Mostrando o vetor ordenado
    printf("\ndeseja ver o vetor ordenado?\nY / T - Sim\nN / F - Nao\n");
    bool ordvet;
    scanf("%s", &temp);

    if (temp == 'Y' || temp == 'T') {
        printf("\nVetor ordenado:-----------------------------------------------------------------------------------\n");
        for (int i = 0; i < size; i++){
            printf("%d ", vet[i]);
        }
    } else {
        ordvet = false;
    }

    printf("\nPressione ENTER para sair\n");
    int sair;
    scanf("%d", &sair);
    
}
