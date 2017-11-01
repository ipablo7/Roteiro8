#include "Endereco.h"

using namespace std;

Endereco::Endereco()
{
    //ctor
}

Endereco::~Endereco()
{
    //dtor
}

void Endereco::setLogradouro(string l){
    logradouro = l;
}
string Endereco::getLogradouro(){
    return logradouro;
}
void Endereco::setBairro(string b){
    bairro = b;
}
string Endereco::getBairro(){
    return bairro;
}
void Endereco::setCidade(string c){
    cidade = c;
}
string Endereco::getCidade(){
    return cidade;
}
void Endereco::setCep(string cep){
    this -> cep = cep;
}
string Endereco::getCep(){
    return cep;
}
void Endereco::setNum(int n){
    num = n;
}
int Endereco::getNum(){
    return num;
}

void Endereco::exibeEnd(){
    cout << getLogradouro() << ", " << getNum() << endl << getBairro() << " " << getCep() << endl << getCidade() << endl;
}

void Endereco::inserirEnd(string l, int n, string b, string cep, string c){
    setLogradouro(l);
    setNum(n);
    setBairro(b);
    setCep(cep);
    setCidade(c);
}
