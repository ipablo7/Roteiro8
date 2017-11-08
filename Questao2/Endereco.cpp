#include "Endereco.h"

Endereco::Endereco()
{
    //ctor
}

Endereco::~Endereco()
{
    //dtor
}

void Endereco::setLogradouro(string a){
    logradouro = a;
}
void Endereco::setBairro(string a){
    bairro = a;
}
void Endereco::setCidade(string a){
    cidade = a;
}
void Endereco::setCEP(string a){
    CEP = a;
}
void Endereco::setNumero(int n){
    numero = n;
}
string Endereco::getLogradouro(){
    return logradouro;
}
string Endereco::getBairro(){
    return bairro;
}
string Endereco::getCidade(){
    return cidade;
}
string Endereco::getCEP(){
    return CEP;
}
int Endereco::getNumero(){
    return numero;
}
