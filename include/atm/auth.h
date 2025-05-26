// ../../include/atm/auth.h

#ifndef AUTH_H
#define AUTH_H

#include "storage.h" 

// Função para autenticar usuário
int autenticarUsuario(const char* id, const char* senhaDigitada, Conta contas[], int tamanho);

// Função para gerar hash da senha digitada
void gerarHash(const char* senhaOriginal, char* senhaHashDestino);

#endif