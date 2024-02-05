#ifndef LIVRO_H
#define LIVRO_H

#include "ItemComum.h"

class Livro : public ItemComum
{
	protected:
		int numeroEdicao;
		string cidade;
		int numeroPaginas;
		string isbn;
		string editora;
		string assunto;
		string palavraChave1;
		string palavraChave2;
	
	public:
		Livro();
		Livro(string titulo, string autor, int ano, bool emprestado, int numeroEdicao, string cidade,int numeroPaginas, string isbn, string editora, string assunto, string palavraChave1, string palavraChave2);
		~Livro();
		
		//Getters
		string getIsbn();
		string getCidade();
		string getEditora();
		string getAssunto();
		int getNumeroEdicao();
		int getNumeroPaginas();
		string getPalavraChave1();
		string getPalavraChave2();
		
		//Setters
		void setIsbn(string isbn);
		void setCidade(string cidade);
		void setEditora(string editora);
		void setAssunto(string assunto);
		void setNumeroEdicao(int numeroEdicao);
		void setNumeroPaginas(int numeroPaginas);
		void setPalavraChave1(string palavraChave1);
		void setPalavraChave2(string palavraChave2);
		
		void exibirFicha();
		
};

#endif
