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
    cout << logradouro << ", " << num << endl << bairro << " " << cep << endl << cidade << endl;
}

void Endereco::inserirEnd(string l, int n, string b, string cep, string c){
        cout << "Insira o logradouro: ";
        cin >> l;
        setLogradouro(l);
        cout << "Insira o numero: ";
        cin >> n;
        setNum(n);
        cout << "Insira o bairro: ";
        cin >> b;
        setBairro(b);
        cout << "Insira o CEP: ";
        cin >> cep;
        setCep(cep);
        cout << "Insira a cidade: ";
        cin >> c;
        setCidade(c);
}
