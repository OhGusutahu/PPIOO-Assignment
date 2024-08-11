#ifndef EXP_TREE_H_INCLUDED
#define EXP_TREE_H_INCLUDED

enum BOOL{TRUE, FALSE};

typedef struct sNo *pointer;

pointer plant();
/*
 * Inicializa a árvore
 */

int empty(pointer tree);
/*
 * Retorna TRUE caso a árvore esteja vazia, caso contrário FALSE
 */

pointer bloom(pointer *tree, char x[]);
/*
 * Aloca memória para um nó,
 * insere x no nó e
 * retorna-o
 */

int push(pointer *tree, pointer *x);
/*
 * Adiciona o nó x na raiz da árvore movendo a raiz antiga para frente
 * Retorna TRUE se adicionado com sucesso
 */

pointer pop(pointer *tree);
/*
 * Remove a raiz da árvore, retornando esse nó
 */

int parser(pointer *tree, char string[]);
/*
 * Recebe uma string e devolve uma árvore que representa a expressão
 * Retorna TRUE se realizada com sucesso
*/

int to_string(pointer tree, char *string);
/*
 * Recebe uma árvore que representa um expressão e devolve uma string que representa a mesma expressão
 * Retorna TRUE se realizada com sucesso
 */

#endif // EXP_TREE_H_INCLUDED
