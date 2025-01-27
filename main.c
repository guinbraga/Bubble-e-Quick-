#include <stdio.h>
#include <stdlib.h>
#include "pratos.h"
#include "quick_sort.h"
#include <time.h>


int main(){
    PRATO* prato = malloc(sizeof(PRATO) * 300000);
    for (int i = 0; i<300000; ++i){
        prato[i].nome = pratos[i%10];
        prato[i].prioridade = rand()%300000;
        prato[i].tempo = rand()%3000;
    }

    PRATO* copia = malloc(sizeof(PRATO) * 300000);
    for (int i = 0; i< 300000; ++i){
        copia[i] = prato[i];
    }
    // bubble sort;
    clock_t comeco, fim;
    double tempo_usado_bubble, tempo_usado_quick;
    comeco = clock();
    for (int i = 0; i<299999; ++i){
        for (int j = 0; j<299999-i; ++j){
            if ((prato[j].prioridade < prato[j+1].prioridade) || ((prato[j].prioridade == prato[j+1].prioridade) && (prato[j].tempo > prato[j+1].tempo))){
                PRATO temp = prato[j];
                prato[j] = prato[j+1];
                prato[j+1] = temp;
            }
        }
    }
    fim = clock();
    tempo_usado_bubble = ((double) (fim-comeco))/CLOCKS_PER_SEC;
    printf("Bubble sort levou %f segundos para ser executado\n", tempo_usado_bubble);

    // quick sort:
    comeco = clock();
    QuickSort(copia, 300000);
    fim = clock();
    tempo_usado_quick = ((double) (fim - comeco)) / CLOCKS_PER_SEC;
    printf("Quick sort levou %f segundos para ser executado\n", tempo_usado_quick);
}