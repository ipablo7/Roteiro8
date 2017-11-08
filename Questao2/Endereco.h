#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        virtual ~Endereco();
        void setLogradouro(string);
        void setBairro(string);
        void setCidade(string);
        void setCEP(string);
        void setNumero(int);
        string getLogradouro();
        string getBairro();
        string getCidade();
        string getCEP();
        int getNumero();

    private:
        string logradouro, bairro, cidade, CEP;
        int numero;
};

#endif // ENDERECO_H
