#include <stdio.h>
#include <string.h>
#include "../include/atm/storage.h"
#include "../include/atm/auth.h"

#define MAX_CONTAS 10

int main() {
    Conta contas[MAX_CONTAS];
    int num_contas = carregar_contas(contas, MAX_CONTAS);

    if (num_contas == 0) {
        printf("Erro ao carregar as contas.\n");
        return 1;
    }

    // Aqui você insere o ID e a senha direto no código
    // ou pega de algum outro lugar, como input da interface do seu sistema real
    const char* id_input = "D1";
    const char* senha_input = "1234";

    if (autenticarUsuario(id_input, senha_input, contas, num_contas)) {
        printf("Login realizado com sucesso!\n");
    } else {
        printf("ID ou senha incorretos.\n");
    }

    return 0;
}