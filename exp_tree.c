#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exp_tree.h"

#define ARRAYSIZE(a) (sizeof(a) / sizeof(a[0]))

struct sNo {
    char info[1]; // tam 1, realloc quando necessário
    int h; // altura
    pointer esq, dir, prox;
};

pointer plant() {
    return NULL;
}

int empty(pointer tree) {
    return (tree == NULL) ? TRUE : FALSE;
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


int parser(pointer *tree, char *string[]) {
    int i = 0;
    for(i=0; i < ARRAYSIZE(string); i++) {
        if(string[i] == "(") {
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
        } else if(string[i] == ")") {
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
        } else if(string[i] == "*") {
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
        } else if(string[i] == "/") {
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
        } else if(string[i] == "+") {
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
        } else if(string[i] == "-") {
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
        } else {
            /*
             * Considerando que todos os inputs estão da forma correta, o else seria números inteiros
             */
            pointer node = bloom(&tree, string[i]);
            // blablabla
            //
            //
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
