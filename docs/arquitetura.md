# Arquitetura do Sistema - Projeto C-ATM

## Estrutura Modular

```
C-ATM/
├── data/              # Arquivos JSON de contas e logs
├── include/           # Arquivos .h (headers)
├── src/               # Código-fonte C (.c)
├── tests/             # Testes automatizados
├── docs/              # Documentação técnica
```

## Módulos e Responsabilidades

### main.c
- Inicializa o programa
- Orquestra o fluxo entre módulos

### auth.[c/h]
- Autenticação de usuários via PIN (com hash)
- Limite de tentativas
- Função: `int authenticate(...)`

### account.[c/h]
- Consulta de saldo e alteração de PIN
- Validação de PIN atual

### transaction.[c/h]
- Saque, depósito e extrato
- Atualiza `accounts.json` e `transaction_log.json`

### storage.[c/h]
- Leitura e escrita de dados JSON
- Interface com arquivos

### security.[c/h]
- Hash de PINs
- Validação de entrada (limite de tamanho, caracteres)

### ui.[c/h]
- Menu e interface textual
- Saída formatada no terminal

### utils.[c/h]
- Funções auxiliares: timestamp, validação numérica, etc.

## Testes
- `tests/test_auth.c`: login e falhas
- `tests/test_transaction.c`: movimentações
- `tests/test_account.c`: alteração de dados