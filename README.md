# Projeto C-ATM - Simulador de Caixa Eletrônico

Este projeto simula o funcionamento de um caixa eletrônico (ATM) usando a linguagem C, com foco em **segurança de software** e **boas práticas DevSecOps**. Desenvolvido como trabalho acadêmico, o projeto segue uma estrutura modular e segura, com autenticação robusta, controle de transações e testes automatizados.

## 📁 Estrutura do Projeto

```
C-ATM/
├── data/              # Dados simulados e logs
├── include/           # Headers (.h)
├── src/               # Implementações (.c)
├── tests/             # Testes unitários
├── docs/              # Documentação técnica
├── Makefile           # Compilação automatizada
└── README.md
```

## ⚙️ Funcionalidades

- Login com autenticação por cartão e PIN
- Saque e depósito com atualização em JSON
- Alteração de PIN
- Consulta de saldo
- Extrato de transações
- Registro de logs para auditoria
- Mensagens de erro para entradas inválidas ou saldo insuficiente

## 🔐 Cuidados com a Segurança

- PINs armazenados com **hash seguro** (SHA-256)
- Entradas validadas contra **injeções e buffer overflows**
- Arquivos de dados com **permissões restritas**
- Logs de transações para **auditoria**
- **Bloqueio** após múltiplas tentativas de autenticação

## 🧪 Testes

- Testes unitários com `assert.h`
- Testes de borda (entradas inválidas)
- Testes de integração por etapa
- Suporte para ferramentas como Valgrind e AddressSanitizer


Para detalhes de implementação, veja os arquivos `docs/arquitetura.md` e `docs/roadmap.md`.
