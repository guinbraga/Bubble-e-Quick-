#ifndef PRATOS
#define PRATOS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct prato{
    char* nome;
    int prioridade;
    int tempo;
}PRATO;


char pratos[10][50] = {
    "fish-n-chips",
    "shepherd's-pie",
    "steak-n-kidney-pie",
    "haggis",
    "bangers-n-mash",
    "yorkshire-pudding",
    "full-english-breakfast",
    "scotch-egg",
    "trifle",
    "toad-in-the-hole"
};

#endif