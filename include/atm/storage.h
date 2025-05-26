#ifndef STORAGE_H
#define STORAGE_H

typedef struct {
    char nome[20];           // Nome do proprietário da conta
    char id[10];             // Identificador da conta (ex: D1, D2)
    char senha_hash[65];     // Hash da senha (PIN)
    double saldo;            // Saldo disponível
} Conta;

int carregar_contas(Conta contas[], int max_contas);

#endif // STORAGE_H