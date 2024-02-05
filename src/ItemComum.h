#ifndef ITEMCOMUM_H
#define ITEMCOMUM_H

#include "ClearInputEntry.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <limits>
#include <iomanip>      // std::setw

using namespace std;

//Classe VÓ
class ItemComum
{
	protected:
	    int CDU;
	    int ano;
	    string autor;
	    string titulo;
	    bool emprestado;

  	public:
    //metodos 
		ItemComum();
		~ItemComum();
	    ItemComum(string titulo, string autor, int ano, bool emprestado);
	    
		string getTitulo();
	    string getAutor();
	    int getCDU();
	    int getAno();
	    bool getEmprestado();
	    
	    void setTitulo(string titulo);
		void setAutor(string autor);
		void setAno(int ano);
		void setEmprestado(bool emprestado);
		
		void generateCDU();
		//void fichaGenerica(string parameter[]);
		virtual void exibirFicha() = 0;
		
};

#endif

