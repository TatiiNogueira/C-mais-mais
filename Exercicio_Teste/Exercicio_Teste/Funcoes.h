// Verifica se FUNCOES_H ainda não foi definido
#ifndef FUNCOES_H
// Define FUNCOES_H para evitar inclusões múltiplas do ficheiro
#define FUNCOES_H

// Biblioteca para entrada e saída (cout, cin, endl, etc.)
#include <iostream>
#include <string>
using namespace std;

// Definição de uma estrutura chamada Produto
struct Produto {
    string nome;
    float preco;
    int quantidade;
};

// Declaração das funções que serão definidas em Funcoes.cpp
// Isso permite que outras partes do programa (como o main) possam chamá-las
int Escrever_string();
int Hello();
int Nome();
int data_types();
int pedirDadosPessoais();
int exercio2();
int exercio3();
int exercio4();
int exercio5();
int exercio6_soma(int valor1, int valor2);
void exercio6_dobro(int valor);
int exercio7();
int exercio8();
int exercio9();
void registarProdutos(Produto produtos[], int tamanho);
void exibirProdutos(const Produto produtos[], int tamanho);
bool procurarProduto(const Produto produtos[], int tamanho, const string& nomeBusca, Produto& resultado);

class ContaBancaria {
private:
    double saldo;

public:
    ContaBancaria(double saldoInicial);
    void depositar(double valor);
    void sacar(double valor);
    void verSaldo() const;
};

// Fim da verificação do cabeçalho
#endif
// Outra forma (moderna) de garantir que o ficheiro só é incluíd
#pragma once

