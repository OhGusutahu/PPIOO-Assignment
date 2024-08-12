#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "exp_tree.h"

pointer eval_step(pointer tree);
/*
 * Recebe uma árvore que representa uma expressão e devolve uma árvore com um operador avaliado
 */

int lexer(char string[], char *arr_token[]);
/*
 * Recebe uma string e devolve um arranjo de tokens
 * Retorna TRUE se realizado com sucesso
 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    char exp[100]; // talvez eu deixe maior pra evitar qualquer coisa

    printf("Insira a expressão: ");
    fgets(exp, sizeof(exp), stdin);
    exp[strcspn(exp, "\n")] = '\0';

    pointer exp_tree = plant();
    char *arr_token[sizeof(exp)] = {NULL};
    lexer(exp, arr_token);
    parser(exp_tree, arr_token);
    // continue...
    //
    //

    return 0;
}

pointer eval_step(pointer tree) {
    pointer eval_tree;
    // smth smth
    //
    //

    return eval_tree;
}

int lexer(char string[], char *arr_token[]) {
    int i = 0;
    char *aux = strtok(string, ' ');
    while(aux != NULL) {
        arr_token[i++] = aux;
        aux = strtok(NULL, ' ');
    }

    return TRUE;
}
