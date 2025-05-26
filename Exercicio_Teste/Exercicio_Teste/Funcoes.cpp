// Inclui o cabe�alho onde as bibliotecas e declara��es de fun��es est�o definidas
#include "Funcoes.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// Fun��o que exibe uma mensagem de boas-vindas
int Hello() {
    cout << "Ola, Code::Blocks!" << endl;
    return 0;
}

// Fun��o que exibe mensagens de texto de duas formas diferentes
int Escrever_string() {
    //Maneira 1 - Em linhas diferentes
    cout << "Ola C++" << endl;
    cout << "Estou a aprender programacao" << endl;
    //Maneira 2 - Tudo na mesma linha
    cout << "Ola C++" << endl << "Estou a aprender programacao" << endl;
    return 0;
}

// Fun��o que pede o nome do utilizador e responde com uma sauda��o personalizada
int Nome() {
    //Definir string
    string nome;
    //Pedir ao utilizador o nome
    cout << "Qual o teu nome: " << endl;
    // L� o nome do utilizador a partir do teclado
    getline(cin,nome);
    //Exibe a mensagem com a string do nome que o utilizador introduziu
    cout << "Oi " << nome << endl;
    return 0;
}

int data_types() {
    // Declara��o de vari�veis com diferentes tipos de dados
    //Inteiro
    int idade = 22;
    //Decimal
    float altura = 1.68;
    //Decimal com maior precis�o
    double peso = 70.8;
    //�nico caratere
    char inicial = 'c';
    //Texto
    string nome = "Maria";
    //Boleano - True/False
    bool estudante = true;

    // Exibe frases usando cada uma das vari�veis
    cout << "O nome dela " << nome << "." << endl;
    cout << "Ela tem " << idade << " anos." << endl;
    cout << "A sua altura " << altura << " metros." << endl;
    cout << "O seu peso " << peso << " kg." << endl;
    cout << "O seu nome come�a com a letra '" << inicial << "'." << endl;

    // Usa operador tern�rio para traduzir true/false para texto
    cout << "Ela " << (estudante ? " estudante sim." : "estudante n�o.") << endl;

    return 0;
}

int pedirDadosPessoais() {
    // Declara��o das vari�veis
    string nome;
    int idade;
    float altura;
    double peso;

    // Pedir o nome ao utilizador
    cout << "Qual o teu nome? ";
    getline(cin, nome);  // Permite ler nomes com espa�os

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
    // Defini��o das vari�veis dos valores
    int n1, n2;

    cout << "Indique o primeiro n�mero: ";
    cin >> n1;

    cout << "Indique o segundo n�mero: ";
    cin >> n2;

    //Prints dos resultados das contas
    cout << "\nResultados:" << endl;
    cout << "Soma: " << n1 + n2 << endl;
    cout << "Subtra��o: " << n1 - n2 << endl;
    cout << "Multiplica��o: " << n1 * n2 << endl;
    cout << "Divis�o: " << (float)n1 / n2 << endl;
    cout << "Resto da divis�o: " << n1 % n2 << endl;

    return 0;
}

int exercio3() {
    // Defini��o das vari�veis dos valores
    int nota;

    cout << "Indique qual a sua nota: ";
    cin >> nota;

    //Verifica��es
    if (nota >= 0 && nota <= 4) {
        cout << "Reprovado" << endl;
    }
    else if (nota >= 5 && nota <= 6) {
        cout << "Recupera��o" << endl;
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
    // Defini��o das vari�veis dos valores
    int numero;
    int i = 1;

    cout << "Indique o numero para qual deseja fazer a tabuada: ";
    cin >> numero;

    cout << "Tabuada do " << numero << ":" << endl;
    cout << "Ciclo for " << numero << ":" << endl;

    //Ciclo do for onde ir� ser feito a execu��o da conta para a tabuada e mostrado ao cliente
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    cout << "\nCiclo while " << numero << ":" << endl;
    //Ciclo while onde ir� ser feito a execu��o da conta para a tabuada e mostrado ao utilizador
    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }

    return 0;
}

int exercio5() {
    // Defini��o das vari�veis dos valores
	const int tamanho = 5;
	int numeros[tamanho];
	int soma = 0;
	int maior;

	// Ciclo for
    for (int i = 0; i < tamanho; i++) {
		// Indica��o de ex: valor 1, valor 2, etc.
		cout << "Indique o valor " << (i + 1) << ": ";
		// L� o n�mero inteiro do utilizador
		cin >> numeros[i];
		// Soma dos n�meros
		soma += numeros[i];

		// Verifica se o n�mero atual � maior que o maior encontrado at� agora
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }

        // Resultados
        cout << "\nA Soma dos elementos: " << soma << endl;
        cout << "O maior elemento: " << maior << endl;
    }

    return 0;
}

// Fun��o que recebe dois valores inteiros e retorna a soma deles
int exercio6_soma(int valor1, int valor2) {
    return valor1 + valor2;
}

// Fun��o que recebe um valor inteiro e impri
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
		cout << "O maior valor � o primeiro valor" << endl;
		return valor1;
	}
    else if (valor1 < valor2) {
		cout << "O maior valor � o segundo valor" << endl;
        return valor2;
	}
	else {
		cout << "Os valores s�o iguais." << endl;
        return valor1;
	}
}

int exercio8() {
    string escolha;
    int numeroUtilizador, numeroComputador, soma;

    // Inicializa o gerador de n�meros aleat�rios
    srand(time(0));

    while (true) {
        cout << "Escolha 'Par' ou 'Impar': ";
        cin >> escolha;

        if (escolha != "Par" && escolha != "Impar") {
            cout << "Escolha inv�lida! Tente novamente." << endl;
        }
        else {
            break; // Sai do loop se a escolha for v�lida
        }
    }

    cout << "Digite um n�mero entre 1 e 10: ";
    cin >> numeroUtilizador;

    // Gera n�mero aleat�rio para o computador
    numeroComputador = rand() % 10 + 1;

	// Calcula a soma do n�mero do usu�rio e do computador
    soma = numeroUtilizador + numeroComputador;

    cout << "Tu escolheste: " << numeroUtilizador << endl;
    cout << "O computador escolheu: " << numeroComputador << endl;
    cout << "Soma: " << soma << " - ";

    // Verifica��o do resultado
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

// Fun��o que verifica se um n�mero � primo
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
		    cout << "Valor inv�lido." << endl;
            continue;
	    }
        else{
		    // Verifica se o n�mero � par ou �mpar
		    if (ehPrimo(valor)) {
			    cout << "O n�mero " << valor << " � primo." << endl;
		    }
		    else {
			    cout << "O n�mero " << valor << " n�o � primo." << endl;
		    }
	    }
    }
}

void registarProdutos(Produto produtos[], int tamanho) {
	// Loop para o registo de produtos
    for (int i = 0; i < tamanho; i++) {
		// Pede ao utilizador para inserir os dados do produto
		// Adicionamos mais 1 pois o array come�a em 0
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: ";
		// L� o nome do produto mesmo que tenha espa�os
        getline(cin, produtos[i].nome);

        cout << "Preco: � ";
        cin >> produtos[i].preco;

        cout << "Quantidade em estoque: ";
        cin >> produtos[i].quantidade;

        cin.ignore();
		// Linha em branco para separar os produtos
        cout << endl;
    }
}

void exibirProdutos(const Produto produtos[], int tamanho) {
	// Configura a precis�o de sa�da para 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Lista de Produtos:\n";
    cout << "----------------------------------------------------\n";
	// Mostrar cabe�alho da tabela
    // setw(x) - Configura a largura das colunas
	// left - Alinha o texto � esquerda
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
            << "� " << setw(7) << produtos[i].preco
            << setw(10) << produtos[i].quantidade
            << "� " << valorTotal << endl;
    }
}

// Construtor da classe ContaBancaria
ContaBancaria::ContaBancaria(double saldoInicial) {
	// Inicializa o saldo da conta com o valor fornecido
    // garantindo que o valor n�o seja negativo
    if (saldoInicial >= 0)
        saldo = saldoInicial;
    else
        saldo = 0;
	// Outra maneira de fazer o mesmo:
    // saldo = (saldoInicial >= 0) ? saldoInicial : 0;
}

// M�todo para depositar um valor na conta
void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
		// Adiciona o valor ao saldo da conta
        saldo += valor;
        cout << "Dep�sito de " << valor << "� realizado.\n";
    }
    else {
        cout << "Valor inv�lido para dep�sito.\n";
    }
}

// M�todo para sacar um valor da conta
void ContaBancaria::sacar(double valor) {
	// Verifica se o valor � positivo e se h� saldo suficiente
    if (valor > 0 && valor <= saldo) {
		// Subtrai o valor do saldo da conta
        saldo -= valor;
        cout << "Levantamento de �" << valor << " realizado.\n";
    }
    else {
        cout << "Levantamento inv�lido ou saldo insuficiente.\n";
    }
}

// M�todo para ver o saldo atual da conta
void ContaBancaria::verSaldo() const {
    cout << "Saldo atual: " << saldo << "�" << endl;
}

// M�todo para procurar um produto pelo nome
bool procurarProduto(const Produto produtos[], int tamanho, const string& nomeBusca, Produto& resultado) {
    for (int i = 0; i < tamanho; i++) {
        if (produtos[i].nome == nomeBusca) {
            resultado = produtos[i];
            return true;
        }
    }
    return false;
}
