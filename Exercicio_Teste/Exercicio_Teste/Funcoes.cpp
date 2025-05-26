// Inclui o cabeçalho onde as bibliotecas e declarações de funções estão definidas
#include "Funcoes.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// Função que exibe uma mensagem de boas-vindas
int Hello() {
    cout << "Ola, Code::Blocks!" << endl;
    return 0;
}

// Função que exibe mensagens de texto de duas formas diferentes
int Escrever_string() {
    //Maneira 1 - Em linhas diferentes
    cout << "Ola C++" << endl;
    cout << "Estou a aprender programacao" << endl;
    //Maneira 2 - Tudo na mesma linha
    cout << "Ola C++" << endl << "Estou a aprender programacao" << endl;
    return 0;
}

// Função que pede o nome do utilizador e responde com uma saudação personalizada
int Nome() {
    //Definir string
    string nome;
    //Pedir ao utilizador o nome
    cout << "Qual o teu nome: " << endl;
    // Lê o nome do utilizador a partir do teclado
    getline(cin,nome);
    //Exibe a mensagem com a string do nome que o utilizador introduziu
    cout << "Oi " << nome << endl;
    return 0;
}

int data_types() {
    // Declaração de variáveis com diferentes tipos de dados
    //Inteiro
    int idade = 22;
    //Decimal
    float altura = 1.68;
    //Decimal com maior precisão
    double peso = 70.8;
    //Único caratere
    char inicial = 'c';
    //Texto
    string nome = "Maria";
    //Boleano - True/False
    bool estudante = true;

    // Exibe frases usando cada uma das variáveis
    cout << "O nome dela " << nome << "." << endl;
    cout << "Ela tem " << idade << " anos." << endl;
    cout << "A sua altura " << altura << " metros." << endl;
    cout << "O seu peso " << peso << " kg." << endl;
    cout << "O seu nome começa com a letra '" << inicial << "'." << endl;

    // Usa operador ternário para traduzir true/false para texto
    cout << "Ela " << (estudante ? " estudante sim." : "estudante não.") << endl;

    return 0;
}

int pedirDadosPessoais() {
    // Declaração das variáveis
    string nome;
    int idade;
    float altura;
    double peso;

    // Pedir o nome ao utilizador
    cout << "Qual o teu nome? ";
    getline(cin, nome);  // Permite ler nomes com espaços

    // Pedir a idade
    cout << "Qual a tua idade? ";
    cin >> idade;

    // Pedir a altura
    cout << "Qual a tua altura (em metros)? ";
    cin >> altura;

    // Pedir o peso
    cout << "Qual o teu peso? ";
    cin >> peso;

    // Exibir os dados introduzidos pelo utilizador
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Peso: " << altura << " Kg" << endl;

    return 0;
}

int exercio2() {
    // Definição das variáveis dos valores
    int n1, n2;

    cout << "Indique o primeiro número: ";
    cin >> n1;

    cout << "Indique o segundo número: ";
    cin >> n2;

    //Prints dos resultados das contas
    cout << "\nResultados:" << endl;
    cout << "Soma: " << n1 + n2 << endl;
    cout << "Subtração: " << n1 - n2 << endl;
    cout << "Multiplicação: " << n1 * n2 << endl;
    cout << "Divisão: " << (float)n1 / n2 << endl;
    cout << "Resto da divisão: " << n1 % n2 << endl;

    return 0;
}

int exercio3() {
    // Definição das variáveis dos valores
    int nota;

    cout << "Indique qual a sua nota: ";
    cin >> nota;

    //Verificações
    if (nota >= 0 && nota <= 4) {
        cout << "Reprovado" << endl;
    }
    else if (nota >= 5 && nota <= 6) {
        cout << "Recuperação" << endl;
    }
    else if (nota >= 7 && nota <= 10) {
        cout << "Aprovado" << endl;
    }
    else {
        cout << "Nota introduzida incorreta!" << endl;
    }

    return 0;
}

int exercio4() {
    // Definição das variáveis dos valores
    int numero;
    int i = 1;

    cout << "Indique o numero para qual deseja fazer a tabuada: ";
    cin >> numero;

    cout << "Tabuada do " << numero << ":" << endl;
    cout << "Ciclo for " << numero << ":" << endl;

    //Ciclo do for onde irá ser feito a execução da conta para a tabuada e mostrado ao cliente
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    cout << "\nCiclo while " << numero << ":" << endl;
    //Ciclo while onde irá ser feito a execução da conta para a tabuada e mostrado ao utilizador
    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }

    return 0;
}

int exercio5() {
    // Definição das variáveis dos valores
	const int tamanho = 5;
	int numeros[tamanho];
	int soma = 0;
	int maior;

	// Ciclo for
    for (int i = 0; i < tamanho; i++) {
		// Indicação de ex: valor 1, valor 2, etc.
		cout << "Indique o valor " << (i + 1) << ": ";
		// Lê o número inteiro do utilizador
		cin >> numeros[i];
		// Soma dos números
		soma += numeros[i];

		// Verifica se o número atual é maior que o maior encontrado até agora
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }

        // Resultados
        cout << "\nA Soma dos elementos: " << soma << endl;
        cout << "O maior elemento: " << maior << endl;
    }

    return 0;
}

// Função que recebe dois valores inteiros e retorna a soma deles
int exercio6_soma(int valor1, int valor2) {
    return valor1 + valor2;
}

// Função que recebe um valor inteiro e impri
void exercio6_dobro(int valor) {
    cout << "O dobro de " << valor << " = " << valor * 2 << endl;
}

int exercio7() {
	int valor1, valor2;
	cout << "Indique o primeiro valor: ";
	cin >> valor1;  
	cout << "Indique o segundo valor: ";
	cin >> valor2;

	if (valor1 > valor2) {
		cout << "O maior valor é o primeiro valor" << endl;
		return valor1;
	}
    else if (valor1 < valor2) {
		cout << "O maior valor é o segundo valor" << endl;
        return valor2;
	}
	else {
		cout << "Os valores são iguais." << endl;
        return valor1;
	}
}

int exercio8() {
    string escolha;
    int numeroUtilizador, numeroComputador, soma;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    while (true) {
        cout << "Escolha 'Par' ou 'Impar': ";
        cin >> escolha;

        if (escolha != "Par" && escolha != "Impar") {
            cout << "Escolha inválida! Tente novamente." << endl;
        }
        else {
            break; // Sai do loop se a escolha for válida
        }
    }

    cout << "Digite um número entre 1 e 10: ";
    cin >> numeroUtilizador;

    // Gera número aleatório para o computador
    numeroComputador = rand() % 10 + 1;

	// Calcula a soma do número do usuário e do computador
    soma = numeroUtilizador + numeroComputador;

    cout << "Tu escolheste: " << numeroUtilizador << endl;
    cout << "O computador escolheu: " << numeroComputador << endl;
    cout << "Soma: " << soma << " - ";

    // Verificação do resultado
    if (soma % 2 == 0) {
        cout << "Par" << endl;
        if (escolha == "Par")
            cout << "Tu ganhaste!" << endl;
        else
            cout << "O computador ganhou!" << endl;
    }
    else {
        cout << "Impar" << endl;
        if (escolha == "Impar")
            cout << "Tu ganhaste!" << endl;
        else
            cout << "O computador ganhou!" << endl;
    }

    return 0;
}

// Função que verifica se um número é primo
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int exercio9() {
    int valor;

    while (true)
    {
        cout << "Indique um valor inteiro: ";
        cin >> valor;
	    if (valor < 0) {
		    cout << "Valor inválido." << endl;
            continue;
	    }
        else{
		    // Verifica se o número é par ou ímpar
		    if (ehPrimo(valor)) {
			    cout << "O número " << valor << " é primo." << endl;
		    }
		    else {
			    cout << "O número " << valor << " não é primo." << endl;
		    }
	    }
    }
}

void registarProdutos(Produto produtos[], int tamanho) {
	// Loop para o registo de produtos
    for (int i = 0; i < tamanho; i++) {
		// Pede ao utilizador para inserir os dados do produto
		// Adicionamos mais 1 pois o array começa em 0
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: ";
		// Lê o nome do produto mesmo que tenha espaços
        getline(cin, produtos[i].nome);

        cout << "Preco: € ";
        cin >> produtos[i].preco;

        cout << "Quantidade em estoque: ";
        cin >> produtos[i].quantidade;

        cin.ignore();
		// Linha em branco para separar os produtos
        cout << endl;
    }
}

void exibirProdutos(const Produto produtos[], int tamanho) {
	// Configura a precisão de saída para 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Lista de Produtos:\n";
    cout << "----------------------------------------------------\n";
	// Mostrar cabeçalho da tabela
    // setw(x) - Configura a largura das colunas
	// left - Alinha o texto à esquerda
    cout << setw(20) << left << "Nome"
        << setw(10) << "Preco"
        << setw(10) << "Quantidade"
        << setw(15) << "Valor Total" << endl;
    cout << "----------------------------------------------------\n";

	// Loop para exibir os produtos
    for (int i = 0; i < tamanho; i++) {
		// Calcula o valor total do produto
        float valorTotal = produtos[i].preco * produtos[i].quantidade;
		// Exibe os dados do produto formatados
        cout << setw(20) << left << produtos[i].nome
            << "€ " << setw(7) << produtos[i].preco
            << setw(10) << produtos[i].quantidade
            << "€ " << valorTotal << endl;
    }
}

// Construtor da classe ContaBancaria
ContaBancaria::ContaBancaria(double saldoInicial) {
	// Inicializa o saldo da conta com o valor fornecido
    // garantindo que o valor não seja negativo
    if (saldoInicial >= 0)
        saldo = saldoInicial;
    else
        saldo = 0;
	// Outra maneira de fazer o mesmo:
    // saldo = (saldoInicial >= 0) ? saldoInicial : 0;
}

// Método para depositar um valor na conta
void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
		// Adiciona o valor ao saldo da conta
        saldo += valor;
        cout << "Depósito de " << valor << "€ realizado.\n";
    }
    else {
        cout << "Valor inválido para depósito.\n";
    }
}

// Método para sacar um valor da conta
void ContaBancaria::sacar(double valor) {
	// Verifica se o valor é positivo e se há saldo suficiente
    if (valor > 0 && valor <= saldo) {
		// Subtrai o valor do saldo da conta
        saldo -= valor;
        cout << "Levantamento de €" << valor << " realizado.\n";
    }
    else {
        cout << "Levantamento inválido ou saldo insuficiente.\n";
    }
}

// Método para ver o saldo atual da conta
void ContaBancaria::verSaldo() const {
    cout << "Saldo atual: " << saldo << "€" << endl;
}

// Método para procurar um produto pelo nome
bool procurarProduto(const Produto produtos[], int tamanho, const string& nomeBusca, Produto& resultado) {
    for (int i = 0; i < tamanho; i++) {
        if (produtos[i].nome == nomeBusca) {
            resultado = produtos[i];
            return true;
        }
    }
    return false;
}
