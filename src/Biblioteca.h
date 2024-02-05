#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "ItemComum.h"
#include "Livro.h"

class Biblioteca
{
	public:
		Biblioteca();
		~Biblioteca();
		
	    void adicionaLivro();
	    void adicionaPeriodico();
	    void adicionaTrabalhoConclusao();
	    void adicionaRelatorio();
	    void adicionaMidias();
	    void adicionaCartazes();
	    void adicionaMapas();
	    
	    void pesquisarItem();
	    void pegarEmprestado();
	    void removerItem();

	protected:
		vector<ItemComum*> listItem;
};

#endif






