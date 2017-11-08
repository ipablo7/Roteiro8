#include "Imovel.h"

Imovel::Imovel()
{
    //ctor
}

Imovel::~Imovel()
{
    //dtor
}

void Imovel::setEndereco(string l, int n, string b , string ce, string cid){
    endereco.setLogradouro(l);
    endereco.setNumero(n);
    endereco.setBairro(b);
    endereco.setCEP(ce);
    endereco.setCidade(cid);
}

Endereco Imovel::getEndereco(){
    return endereco;
}
