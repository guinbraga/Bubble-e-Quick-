#include <stdio.h>
#include "pratos.h"

void QuickSort_particao(PRATO* pratos, int esquerda, int direita, int *i, int *j){
    PRATO pivo, aux;
    *i = esquerda; *j = direita;
    pivo = pratos[(*i+*j)/2];
    do {
        while (pratos[*i].prioridade < pivo.prioridade || (pratos[*i].prioridade == pivo.prioridade && pratos[*i].tempo < pivo.tempo)) (*i)++;
        while (pratos[*j].prioridade > pivo.prioridade || (pratos[*j].prioridade == pivo.prioridade && pratos[*j].tempo > pivo.tempo)) (*j)--;
        if (*i <= *j){
            aux = pratos[*i];
            pratos[*i] = pratos[*j];
            pratos[*j] = aux;
            (*i)++; (*j)--;
        }
    } while (*i <= *j);
}

void QuickSort_ordena(PRATO* pratos, int esquerda, int direita){
    int i, j;
    QuickSort_particao(pratos, esquerda, direita, &i, &j);
    if (esquerda<j) QuickSort_ordena(pratos, esquerda, j);
    if (direita>i) QuickSort_ordena(pratos, i, direita);
}

void QuickSort(PRATO* pratos, int tamanho){
    QuickSort_ordena(pratos, 0, tamanho-1);
};