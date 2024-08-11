#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exp_tree.h"

struct sNo {
    char info[1]; // tam 1, realloc quando necessário
    int h; // altura
    pointer esq, dir, prox;
};

pointer plant() {
    return NULL;
}

int empty(pointer tree) {
    if(tree == NULL) return TRUE;
    return FALSE;
}

pointer bloom(pointer *tree, char x[]) {
    (*tree) = (pointer) malloc(sizeof(struct sNo));
    realloc((*tree)->info, sizeof(x));
    strcpy((*tree)->info, x);
    (*tree)->esq = NULL;
    (*tree)->dir = NULL;
    (*tree)->prox = NULL;

    return (tree);
}

int push(pointer *tree, pointer *x) {
    if(tree == NULL) tree = x;
    else {
        (*x)->prox = tree;
        tree = x;
    }

    return TRUE;
}

pointer pop(pointer *tree) {
    pointer x = tree;
    tree = (*tree)->prox;
    
    return x;
}

int parser(pointer *tree, char string[]) {
    int i = 0;
    while(i <= strlen(string)) {
        switch(string[i]) {
            case '(':
                pointer node = bloom(&tree, string[i]);
                // reordenar
                break;
            case ')':
                pointer node = bloom(&tree, string[i]);
                // reordenar
                break;
            case '*':
                pointer node = bloom(&tree, string[i]);
                // reordenar
                break;
            case '/':
                pointer node = bloom(&tree, string[i]);
                // reordenar
                break;
            case '+':
                pointer node = bloom(&tree, string[i]);
                // reordenar
                break;
            case '-':
                if(string[i+1] == ('1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9')) {
                    char temp[11] = string[i++]; // "10" é o tamanho máximo pra int em C, "11" para o '-'
                    while(string[i] != (' ' || ')')) strcat(temp, string[i++]);
                    pointer node = bloom(&tree, temp);
                    
                    /*
                     * Abaixo, ideia doida, não sei se estou certo
                     * No caso, como é um número, que teria o menor valor,
                     * só é adicionado a direita da árvore e seria movido nos outros casos,
                     * já que as operações tem suas prioridades
                     */
                    pointer *aux = tree;
                    while((*aux)->dir != NULL) (*aux) = (*tree)->dir;
                    (*aux)->dir = node;
                } else {
                    pointer node = bloom(&tree, string[i]);
                    // reordenar
                }
                
                break;
            case ('1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9'):
                char temp[11] = string[i++]; // "10" é o tamanho máximo pra int em C, "11" para o '-'
                while(string[i] != (' ' || ')')) strcat(temp, string[i++]);
                pointer node = bloom(&tree, temp);

                /*
                 * Abaixo, ideia doida, não sei se estou certo
                 * No caso, como é um número, que teria o menor valor,
                 * só é adicionado a direita da árvore e seria movido nos outros casos,
                 * já que as operações tem suas prioridades
                 */
                pointer *aux = tree;
                while((*aux)->dir != NULL) (*aux) = (*tree)->dir;
                (*aux)->dir = node;

                break;
            default:
                i++;
        }
    }

    return TRUE;
}

int to_string(pointer tree, char *string) {
    to_string(tree->esq, string);
    strcat(string, tree->info);
    to_string(tree->dir, string);

    return TRUE;
}
