#include "Funcoes.h"  // Inclui o cabe�alho com a declara��o da fun��o

using namespace std;

int main() {
    //Chamar as Fun��es
    //Hello();
    //Escrever_string();
    //Nome();
    //data_types();
    //pedirDadosPessoais();
    //exercio2();
    //exercio3();
    //exercio4();
	//exercio5();
	/*int valor1, valor2;

    cout << "Digite um valor 1: ";
    cin >> valor1;

    cout << endl << "Digite um valor 2: ";
    cin >> valor2;

    int resultado = exercio6_soma(valor1, valor2);
    cout << "Resultado da soma: " << resultado << endl;

    exercio6_dobro(valor1);*/
    //int resultado = exercio7();
    //cout << "Valor maior: " << resultado << endl;
     
    //exercio8();
	//exercio9();

    /*const int TAMANHO = 5;
    Produto produtos[TAMANHO];
    registarProdutos(produtos, TAMANHO);
    exibirProdutos(produtos, TAMANHO);*/

    /*float saldoInicial;
    cout << "Digite o saldo inicial da conta: �";
    cin >> saldoInicial;

    ContaBancaria minhaConta(saldoInicial);

    int opcao;
    float valor;

    do {
		// Menu de op��es
        cout << "\n=== MENU CONTA BANC�RIA ===" << endl;
        cout << "1. Ver saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            minhaConta.verSaldo();
            break;
        case 2:
            cout << "Indique o valor que quer depositar: �";
            cin >> valor;
            minhaConta.depositar(valor);
            break;
        case 3:
            cout << "Indique o valor que quer levantar: �";
            cin >> valor;
            minhaConta.sacar(valor);
            break;
        case 4:
            cout << "A fechar o programa ..." << endl;
            break;
        default:
            cout << "Op��o inv�lida!" << endl;
        }

		// O ciclo repete at� que o utilizador escolha a op��o 4 (sair)
    } while (opcao != 4);*/

    /*const int TAM = 3;
    Produto produtos[TAM];
    string busca;
    Produto produtoEncontrado;

    registarProdutos(produtos, TAM);

    cin.ignore();
    cout << "\nDigite o nome do produto para buscar: ";
    getline(cin, busca);

    if (procurarProduto(produtos, TAM, busca, produtoEncontrado)) {
        cout << "\nProduto encontrado!" << endl;
        cout << "Nome: " << produtoEncontrado.nome << endl;
        cout << "Pre�o: �" << produtoEncontrado.preco << endl;
        cout << "Quantidade: " << produtoEncontrado.quantidade << endl;
    }
    else {
        cout << "Produto n�o encontrado." << endl;
    }*/

    string nomeCompleto;

    cout << "Insere o teu nome completo: ";
    getline(cin, nomeCompleto);

    // Encontrar posi��o do primeiro e �ltimo espa�o
    size_t primeiroEspaco = nomeCompleto.find(' ');
    size_t ultimoEspaco = nomeCompleto.rfind(' ');

    if (primeiroEspaco == string::npos) {
        // N�o h� espa�os: s� tem um nome
        cout << "Nome �nico: " << nomeCompleto << endl;
    }
    else {
        // Separar primeiro nome e �ltimo apelido
        string primeiroNome = nomeCompleto.substr(0, primeiroEspaco);
        string ultimoApelido = nomeCompleto.substr(ultimoEspaco + 1);

        cout << "Primeiro nome: " << primeiroNome << endl;
        cout << "�ltimo apelido: " << ultimoApelido << endl;
    }


    return 0;
}
