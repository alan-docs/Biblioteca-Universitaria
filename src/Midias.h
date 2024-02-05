#ifndef MIDIAS_H
#define MIDIAS_H

#include "ItemComum.h"

class Midias : public ItemComum
{
  protected:

    string duracao;
    string cidade;
    string produtora;
    string idioma;
    string classificacaoEtaria;
    string palavraChave1;
    string palavraChave2;

  public:
    Midias(string titulo, string autor, int ano, bool emprestado, string duracao, string cidade, string produtora, string idioma, string classificacaoEtaria, string palavraChave1, string palavraChave2);
    Midias();
	~Midias();
	
	
	void exibirFicha();
	
	
	// GET methods
    string getDuracao();
    string getCidade();
    string getProdutora();
    string getIdioma();
    string getClassificacaoEtaria();
    string getPalavraChave1();
    string getPalavraChave2();

    // SET methods
    void setDuracao(string duracao);
    void setCidade(string cidade);
    void setProdutora(string produtora);
    void setIdioma(string idioma);
    void setClassificacaoEtaria(string classificacaoEtaria);
    void setPalavraChave1(string palavraChave1);
    void setPalavraChave2(string palavraChave2);
};
#endif
