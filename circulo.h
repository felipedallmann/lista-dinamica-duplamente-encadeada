#ifndef __CIRCULO__
#define __CIRCULO__

typedef void *Circulo;

/*
 *Cria a struct circulo
 *As informações do circulo são passadas por parametro
 *retorna o apontador para essa estrutura
 */
Circulo cria_circulo(char id[20], char corb[20], char corp[20], double x, double y, double r);

/*
 *utilizada para obter o valor x do circulo
 *O apontador para o circulo é passado
 *retorna o valor de x do círculo
 */
double retorna_circuloX(Circulo circulo);

/*
 *utilizada para obter o valor y do circulo
 *O apontador para o circulo é passado
 *retorna o valor de y do círculo
 */
double retorna_circuloY(Circulo circulo);

/*
 *utilizada para obter o valor r do circulo
 *O apontador para o circulo é passado
 *retorna o valor de r do círculo
 */
double retorna_circuloR(Circulo circulo);

/*
 *utilizada para obter o ID do circulo
 *O apontador para o circulo é passado
 *retorna o ID do círculo
 */
char *retorna_circuloID(Circulo circulo);

/*
 *utilizada para obter a corb do circulo
 *O apontador para o circulo é passado
 *retorna corb do círculo
 */
char *retorna_circuloCORB(Circulo circulo);

/*
 *utilizada para obter corp do circulo
 *O apontador para o circulo é passado
 *retorna corp do círculo
 */
char *retorna_circuloCORPS(Circulo circulo);
#endif
