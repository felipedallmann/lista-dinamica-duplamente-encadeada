#include "circulo.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

typedef struct circulo {
    char id[20], corb[20], corp[20];
    double x, y, r;

} circ;

Circulo cria_circulo(char id[20], char corb[20], char corp[20], double x, double y, double r) {
    circ *c;
    c = (circ *)malloc(sizeof(circ));
    c->r = r;
    c->x = x;
    c->y = y;
    strcpy(c->id, id);
    strcpy(c->corb, corb);
    strcpy(c->corp, corp);

    return c;
}

double retorna_circuloX(Circulo circulo) {
    circ *circuloX = (circ *)circulo;
    return circuloX->x;
}
double retorna_circuloY(Circulo circulo) {
    circ *circuloY = (circ *)circulo;
    return circuloY->y;
}
double retorna_circuloR(Circulo circulo) {
    circ *circuloR = (circ *)circulo;
    return circuloR->r;
}

char *retorna_circuloID(Circulo circulo) {
    circ *circuloID = (circ *)circulo;
    return circuloID->id;
}

char *retorna_circuloCORB(Circulo circulo) {
    circ *circuloCORB = (circ *)circulo;
    return circuloCORB->corb;
}

char *retorna_circuloCORP(Circulo circulo) {
    circ *circuloCORP = (circ *)circulo;
    return circuloCORP->corp;
}
