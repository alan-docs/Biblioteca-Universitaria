#ifndef CARTAZES_H
#define CARTAZES_H

#include "ItemComum.h"

class Cartazes : public ItemComum
{
	protected:
		string cidade;
		string genero;
		string idioma;
		string condicao;
		string assunto;
		string palavraChave1;
		string palavraChave2;
		
	public:
		Cartazes();
		~Cartazes();
		Cartazes(string titulo, string autor, int ano, bool emprestado, string cidade, string genero, string idioma, string condicao, string assunto, string palavraChave1, string palavraChave2);
		
		void exibirFicha();
		

		// GET methods
		string getCidade();
		string getGenero();
		string getIdioma();
		string getAssunto();
		string getCondicao();
		string getPalavraChave1();
		string getPalavraChave2();
		
		
		
		
		// SET methods
		void setCidade(string cidade);
		void setGenero(string genero);
		void setIdioma(string idioma);
		void setAssunto(string assunto);
		void setCondicao(string condicao);
		void setPalavraChave1(string palavraChave1);
		void setPalavraChave2(string palavraChave2);
};

#endif
