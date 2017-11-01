#include "Imovel.h"

Imovel::Imovel()
{
    //ctor
}

Imovel::~Imovel()
{
    //dtor
}

void Imovel::setEndereco(string l, int n, string b, string cep, string c){
    endereco.inserirEnd(l, n, b, cep, c);
}
Endereco Imovel::getEndereco(){
    return endereco;
}
