#ifndef RELATORIO_H
#define RELATORIO_H

#include "ItemComum.h"

class Relatorio : public ItemComum
{
	protected:
		string cidade;
		string assunto;
		int numeroPaginas;
		string organizacao;
		string palavraChave1;
		string palavraChave2;
		
	public:
		Relatorio();
		Relatorio(string titulo, string autor, int ano, bool emprestado, string cidade, int numeroPaginas, string organizacao, string assunto, string palavraChave1, string palavraChave2);
		~Relatorio();
		
		void exibirFicha();
		
		// GET methods
		string getCidade();
		string getAssunto();
		int getNumeroPaginas();
		string getOrganizacao();
		string getPalavraChave1();
		string getPalavraChave2();
		
		
		
		
		// SET methods
		void setCidade(string cidade);
		void setAssunto(string assunto);
		void setOrganizacao(string organizacao);
		void setNumeroPaginas(int numeroPaginas);
		void setPalavraChave1(string palavraChave1);
		void setPalavraChave2(string palavraChave2);
};

#endif
