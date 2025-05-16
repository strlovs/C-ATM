
Projeto C-ATM
Este projeto simula o funcionamento de um Caixa Eletrônico (ATM) usando a linguagem de programação C. O sistema permite que o usuário interaja com o caixa eletrônico para realizar operações como consultar saldo, realizar saques, realizar depósitos, alterar o PIN e verificar extratos de transações. O projeto foi estruturado de forma modular, facilitando a manutenção e evolução do sistema. Proposto pelo professor Geovane Oliveira no UNICEPLAC - Centro Universitário do Planalto Central Apparecido dos Santos

Funcionalidades
Login com cartão e PIN: O usuário insere seu cartão e PIN para autenticar a conta.

Consulta de saldo: Exibe o saldo atual da conta.

Saque: Permite o saque de um valor da conta, verificando se o saldo é suficiente.

Depósito: Permite o depósito de um valor na conta.

Alteração de PIN: Permite a alteração do PIN do usuário.

Extrato de transações: Exibe um extrato das transações realizadas na conta.

Tela de erro: Mensagens de erro para situações como saldo insuficiente ou PIN incorreto.


## Estrutura de Dados
Os dados do sistema, como contas de usuários, são armazenados no arquivo accounts.json na pasta data/. O arquivo pode ser editado manualmente para adicionar ou modificar contas.

## Exemplos de Contas
O arquivo accounts.json pode conter um formato simples como este:

  {
    "account_number": "123456789",
    "pin": "1234",
    "balance": 1000.50
  },
  {
    "account_number": "987654321",
    "pin": "5678",
    "balance": 500.75
  }
]

Testes
O projeto inclui testes automatizados para a lógica de negócios, que podem ser encontrados na pasta tests/. Para rodá-los, basta compilar e executar os testes específicos.

Arquitetura
O projeto segue uma arquitetura modular, dividida em componentes responsáveis pelas diferentes partes do sistema. Abaixo estão os principais diretórios e seus objetivos:

src/ui: Contém os arquivos responsáveis pela interface de usuário, como as telas de saldo, saque, transações, etc.

src/services: Contém a lógica de serviço do ATM, como as operações de saque, depósito, e verificação de contas.

src/data: Contém a lógica de manipulação de dados, como a leitura e escrita no arquivo accounts.json.

src/common: Contém funções e definições auxiliares compartilhadas em todo o sistema.



