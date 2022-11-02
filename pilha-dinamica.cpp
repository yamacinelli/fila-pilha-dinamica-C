#include <stdio.h>
#include <stdlib.h>

 struct no {
    int valor;
    struct no *proximo;
};

struct pilha {
    no *inicio;
};

void inicia_pilha(pilha *pilha) {
    pilha->inicio = NULL;
}

/**
 * Método responsável por realizar o empilhamento do valor na pilha
 * @param valor
 * @param pilha
 */
void empilha(int valor, pilha *pilha) {
    no *ponteiro = (no*) malloc(sizeof(no));

    if (ponteiro == NULL) {
        printf("Erro no empilhamento.");
    } else {
        ponteiro->valor = valor;
        ponteiro->proximo = pilha->inicio;
        pilha->inicio = ponteiro;
    }
}

/**
 * Método responsável por desempilhar a pilha
 * @param pilha
 * @return int
 */
int desempilha(pilha *pilha) {
     no* ponteiro = pilha->inicio;

     if (ponteiro == NULL) {
         printf("Pilha esta vazia.");
         return 0;
     } else {
         pilha->inicio = ponteiro->proximo;
         ponteiro->proximo = nullptr;

         free(ponteiro);
         return pilha->inicio->valor;
     }
}

/**
 * Método responsável por imprimir os valores da pilha
 * @param pilha
 */
void printPilha(pilha *pilha) {
    no *ponteiro = pilha->inicio;

    if (ponteiro == NULL) {
        printf("Pilha esta vazia.");
    } else {
        while(ponteiro != NULL) {
            printf("%d\n", ponteiro->valor);
            ponteiro = ponteiro->proximo;
        }
    }
}

int main() {
    pilha *ponteiro = (pilha*) malloc(sizeof(pilha));

    if (ponteiro == NULL) {
        printf("Alocacao incorreta.");
        return 0;
    } else {
        inicia_pilha(ponteiro);

        empilha(1, ponteiro);
        empilha(2, ponteiro);
        empilha(3, ponteiro);
        empilha(4, ponteiro);
        empilha(5, ponteiro);

        printPilha(ponteiro);

        desempilha(ponteiro); // Desempilha o valor do inicio da pilha
        desempilha(ponteiro);
        desempilha(ponteiro);
        desempilha(ponteiro);
        desempilha(ponteiro);

        printPilha(ponteiro);
    }
}