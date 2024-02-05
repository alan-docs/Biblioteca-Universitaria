#include "ItemComum.h"

ItemComum::ItemComum()
{
	setEmprestado(false);
}

ItemComum::ItemComum(string titulo, string autor, int ano, bool emprestado)
{
	setTitulo(titulo);
	setAutor(autor);
	setAno(ano);
	setEmprestado(false);
	generateCDU();
}

ItemComum::~ItemComum()
{
}

void exibirFicha()
{
	cout << "Erro!" << endl;
}


//GET methods
int ItemComum::getAno()       	{	return this->ano;			}
int ItemComum::getCDU()       	{	return this->CDU;			}
string ItemComum::getAutor()    {	return this->autor;			}
string ItemComum::getTitulo()   {	return this->titulo;		}
bool ItemComum::getEmprestado()	{	return this->emprestado;	}





//SET methods
void ItemComum::setAno(int ano)              	{	this->ano = ano;				}
void ItemComum::setAutor(string autor)          {	this->autor = autor;			}
void ItemComum::setTitulo(string titulo)        {	this->titulo = titulo;			}
void ItemComum::setEmprestado(bool emprestado)	{	this->emprestado = emprestado;	}


/*
	generateCDU() - generate a random number
*/
void ItemComum::generateCDU()
{
	srand((unsigned) time(NULL));
	this->CDU = rand();
}



/*
void ItemComum::fichaGenerica(string parameter[])
{
	cout << endl << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "|   " << parameter[0] << "  " << parameter[1] << " " << string(51,' ') << "" << endl;
	cout << "|                                                                         " <<endl;
	cout << "|   " << parameter[2] << " " << parameter[3] << " " << parameter[4] << " " << parameter[5] << string(19, ' ') << "" << endl;
	cout << "|   " << parameter[6] << string(23, ' ') << "                             " << endl;
	cout << "|                                                                         " <<endl;
	cout << "|   " << parameter[7] << "                                                " << endl;
	cout << "|                                                                         " <<endl;
	cout << "|   " << parameter[8] << " " << parameter[9] << " " << parameter[10] << " " << parameter[11] << "     " << endl;
	cout << "|                                                                         " <<endl;
	cout << "|                                                    " << parameter[12] << "   " <<endl;
	cout << "---------------------------------------------------------------------------" << endl << endl << endl;
}
*/
