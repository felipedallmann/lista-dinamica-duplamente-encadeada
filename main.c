#include <stdio.h>
#include <stdlib.h>

#include "circulo.h"
#include "lista.h"

int main() {
    Lista lista = create();

    Posic posic;
    Info infos;
    Info posic_info;

    posic = get_last(lista);

    printf("Endereço da lista: %p\n", lista);
    printf("Tamanho da lista %d\n", get_length(lista));

    infos = cria_circulo("12", "red", "blue", 10, 15.3, 2);
    posic = insert_final(lista, infos);
    printf("Endereço retornado: %p\n", posic);

    infos = cria_circulo("13", "black", "blue", 50, 64, 6);
    posic = insert_final(lista, infos);
    printf("Endereço retornado: %p\n", posic);

    infos = cria_circulo("14", "grey", "blue", 100, 64.4, 2.5);
    posic = insert_final(lista, infos);
    printf("Endereço retornado: %p\n", posic);

    infos = cria_circulo("15", "white", "blue", 200, 100, 654.2);
    posic = insert_final(lista, infos);
    printf("Endereço retornado: %p\n", posic);

    printLista(lista);
    printf("Tamanho da lista %d\n", get_length(lista));

    posic = get_posic(lista, "13");
    remove_no(lista, posic);

    infos = cria_circulo("17", "white", "blue", 400, 100, 654.2);
    posic = get_posic(lista, "15");
    posic = insert_after(lista, infos, posic);
    printf("Endereço retornado: %p\n", posic);

    infos = cria_circulo("16", "white", "blue", 300, 100, 654.2);
    posic = get_posic(lista, "17");
    posic = insert_before(lista, infos, posic);
    printf("Endereço retornado: %p\n", posic);

    printLista(lista);

    printf("Tamanho da lista %d\n", get_length(lista));

    posic = get_first(lista);
    printf("Retornado: %p\n", posic);
    posic_info = get_infos(posic);
    printf("id do primeiro elemento: %s\n", retorna_circuloID(posic_info));

    posic = get_last(lista);
    printf("Retornado: %p\n", posic);
    posic_info = get_infos(posic);
    printf("id do último elemento: %s\n", retorna_circuloID(posic_info));

    printLista(lista);
    posic = get_posic(lista, "15");
    posic = get_next(lista, posic);
    printf("O endereço retornado para posic(próximo de 15) é: %p\n", posic);

    posic = get_posic(lista, "16");
    posic = get_next(lista, posic);
    printf("O endereço retornado para posic(próximo de 16) é: %p\n", posic);
}