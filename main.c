#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "exp_tree.h"

pointer eval_step(pointer tree);
/*
 * Recebe uma árvore que representa uma expressão e devolve uma árvore com um operador avaliado
 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    char exp[100]; // talvez eu deixe maior pra evitar qualquer coisa

    printf("Insira a expressão: ");
    fgets(exp, sizeof(exp), stdin);
    exp[strcspn(exp, "\n")] = '\0';

    pointer exp_tree = plant();
    parser(exp_tree, exp);
    // continue...

    return 0;
}

pointer eval_step(pointer tree) {
    pointer eval_tree;
    // smth smth

    return eval_tree;
}
