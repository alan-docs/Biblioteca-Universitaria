#ifndef PERIODICO_H
#define PERIODICO_H
#include "ItemComum.h"

class Periodico : public ItemComum{

  protected:
    int numeroEdicao;
    string cidade;
    int numeroPaginas;
    string issn; //O ISSN é o número internacional que identifica unicamente o periódico.
    string editora;
    string assunto; //Manchete para jornal, assunto para resvista
    string palavraChave1;
    string palavraChave2;

  public:
  	Periodico();
	~Periodico();
    Periodico(string titulo, string autor, int ano, bool emprestado, int numeroEdicao, string cidade, int numeroPaginas, string issn, string editora, string assunto, string palavraChave1, string palavraChave2);

	
	void exibirFicha();


    // GET methods
    int getNumeroEdicao();
    string getCidade();
    int getNumeroPaginas();
    string getISSN();
    string getEditora();
    string getAssunto();
    string getPalavraChave1();
    string getPalavraChave2();

    // SET methods
    void setNumeroEdicao(int numeroEdicao);
    void setCidade(string cidade);
    void setNumeroPaginas(int numeroPaginas);
    void setISSN(string issn);
    void setEditora(string editora);
    void setAssunto(string assunto);
    void setPalavraChave1(string palavraChave1);
    void setPalavraChave2(string palavraChave2);
};

#endif
