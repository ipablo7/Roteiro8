#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        void setLogradouro(string);
        string getLogradouro();
        void setBairro(string);
        string getBairro();
        void setCidade(string);
        string getCidade();
        void setCep(string);
        string getCep();
        void setNum(int);
        int getNum();
        void exibeEnd();
        void inserirEnd(string l, int n, string b, string cep, string c);
        virtual ~Endereco();
    private:
        string logradouro;
        string bairro;
        string cidade;
        string cep;
        int num;
};

#endif // ENDERECO_H
