#include "Apartamento.h"
using namespace std;

Apartamento::Apartamento()
{
    //ctor
}

Apartamento::~Apartamento()
{
    //dtor
}

void Apartamento::setPosicao(string a){
    posicao = a;
}
void Apartamento::setNumVagasGaragem(int a){
    numVagasGaragem = a;
}
void Apartamento::setValorCondominio(double a){
    valorCondominio = a;
}
string Apartamento::getPosicao(){
    return posicao;
}
int Apartamento::getNumVagasGaragem(){
    return numVagasGaragem;
}
double Apartamento::getValorCondominio(){
    return valorCondominio;
}
void Apartamento::getDescricao(){
    cout << "Bloco: " << posicao << endl
         << "Numero de vagas garagem: " << numVagasGaragem << endl
         << "Valor condominio = " << valorCondominio << endl;
}
