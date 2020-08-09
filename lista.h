#ifndef __LISTA__
#define __LISTA__

typedef void* No;
typedef void* Lista;
typedef void* Info;
typedef void* Posic;

/*
*Cria a cabeça da lista dinamica duplamente encadeada
*Sem requerimentos
*retorna o endereço para uma lista vazia
*/
Lista create();

/*
*Obtém o tamanho da lista (número de nós)
*É necessário passar a lista como parâmetro
*retorna um inteiro igual ao tamanho da lista
*/
int get_length(Lista lista);

/*
*insere um elemento no final da lista
*é preciso inicar a lista antes de inserir um elemento 
*não retorna nada
*/
Posic insert_final(Lista lista, Info infos);

/*
*insere um elemento posterior um determinado p
*p deve ser um elemento válido da lista
*é retornado o endereço do elemento inserido
*/
Posic insert_before(Lista lista, Info infos, Posic p);

/*
*insere um elemento anterior um determinado p
*p deve ser um elemento válido da lista
*é retornado o endereço do elemento inserido
*/
Posic insert_after(Lista lista, Info infos, Posic p);

/*
*printa todos os nós da lista
*não pode ser uma lista vazia
*não retorna nada
*/
void printLista(Lista lista);

/*
*remove um elemento da lista
*o id passado tem que ser válido
*não retorna nada
*/
void remove_no(Lista lista, Posic no_selecionado);

/*
*utilzada para ter acesso a um nó da lista
*o id passado tem q ser válido
*retorna o endereço do nó
*/
Posic get_posic(Lista lista, char id[20]);

/*
*pega o último elemento da lista
*a lista não pode estar vazia
*retorna o endereço do último nó
*/
Posic get_last(Lista lista);

/*
*pega o primeiro elemento da lista
*a lista não pode estar vazia
*retorna o endereço do primeiro nó
*/
Posic get_first(Lista lista);

/*
*acessa as informações de um posic
*p não pode ser NULL e deve indicar um endereço válido que esteja na lista
*retorna o endereço para as informações do nó especificado por p
*/
Info get_infos(Posic p);

/*
*acessa o proximo elemento de p
*p deve indicar um endereço válido que esteja na lista
*retorna o endereço do elemento posterior de p
*/
Posic get_next(Lista lista, Posic p);

/*
*acessa o proximo elemento de p
*p deve indicar um endereço válido que esteja na lista
*retorna o endereço do elemento anterior de p
*/
Posic get_previous(Lista lista, Posic p);

#endif