/*
//
// Created by yamacinelli on 02/11/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[40];
    int idade;
};

struct no {
    pessoa informacoes;
    no *proximo;
};

struct lista {
    no *inicio;
    no *fim;
};

void inicia_lista(lista *lista) {
    lista->inicio = NULL;
}

*/
/**
 * Método responsável por preencher os a lista
 * @param informacoes
 * @param lista
 *//*

void preencheLista(pessoa informacoes, lista *lista) {
    no *ponteiro = (no*) malloc(sizeof(no));

    if (ponteiro == NULL) {
        printf("Erro no enfileiramento.");
    } else {
       ponteiro->informacoes = informacoes;
       ponteiro->proximo = NULL;

       if (lista->inicio == NULL) {
            lista->inicio = ponteiro;
       } else {
           lista->fim->proximo = ponteiro;
       }

       lista->fim = ponteiro;
    }
}

*/
/**
 * Método responsável por remover um valor da lista
 * @param lista
 *//*

void limpaLista(lista *lista) {
    no *ponteiro = lista->inicio;

    if (ponteiro == NULL) {
        printf("Lista esta vazia.");
    } else {
        lista->inicio = ponteiro->proximo;
        ponteiro->proximo = NULL;

        free(ponteiro);
    }
}

*/
/**
 * Método responsável por imprimir os valores da lista
 * @param lista
 *//*

void printLista(lista *lista) {
    no *ponteiro = lista->inicio;

    if (ponteiro == NULL) {
        printf("Lista esta vazia.");
    } else {
        while(ponteiro != NULL) {
            printf("NOME: %s\n", ponteiro->informacoes.nome);
            printf("IDADE: %d\n", ponteiro->informacoes.idade);

            ponteiro = ponteiro->proximo;
        }
    }
}

int main() {
    lista *ponteiro = (lista*) malloc(sizeof(lista));

    if (ponteiro == NULL) {
        printf("Lista esta vazia.");
        return 0;
    } else {
        inicia_lista(ponteiro);

        pessoa pessoa;
        strcpy(pessoa.nome, "Yago");
        pessoa.idade = 23;
        preencheLista(pessoa, ponteiro);

        strcpy(pessoa.nome, "Aizza");
        pessoa.idade = 27;
        preencheLista(pessoa, ponteiro);

        strcpy(pessoa.nome, "Jean");
        pessoa.idade = 30;
        preencheLista(pessoa, ponteiro);

        printLista(ponteiro);

        limpaLista(ponteiro);
        limpaLista(ponteiro);
        limpaLista(ponteiro);

        printLista(ponteiro);
    }
}*/
