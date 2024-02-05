#include "Cartazes.h"

Cartazes::Cartazes()
{
}

Cartazes::~Cartazes()
{
}

Cartazes::Cartazes(string titulo, string autor, int ano, bool emprestado, string cidade, string genero, string idioma, string condicao, string assunto, string palavraChave1, string palavraChave2) : ItemComum(titulo, autor, ano, emprestado)
{
	setCidade(cidade);
	setGenero(genero);
	setIdioma(idioma);
	setAssunto(assunto);
	setCondicao(condicao);
	setPalavraChave1(palavraChave1);
	setPalavraChave2(palavraChave2);
}


void Cartazes::exibirFicha() {
    cout << getAutor() << ". " << getTitulo() << " - "
         << getCidade() << ". " << getGenero() << ". " << getIdioma() << ". "
         << getCondicao() << ". " << getAno() << ". "
         << getAssunto() << ". 1. " << getPalavraChave1() << ". li. "
         << getPalavraChave2() << ". Ili. CDU:" << getCDU() << endl;
}

    

// GET methods
string Cartazes::getCidade() 		{return cidade;}
string Cartazes::getGenero() 		{return genero;}
string Cartazes::getIdioma() 		{return idioma;}
string Cartazes::getAssunto() 		{return assunto;}
string Cartazes::getCondicao() 		{return condicao;}
string Cartazes::getPalavraChave1() {return palavraChave1;}
string Cartazes::getPalavraChave2() {return palavraChave2;}




// SET methods
void Cartazes::setCidade(string cidade) 				{this->cidade = cidade;}
void Cartazes::setGenero(string genero) 				{this->cidade = cidade;}
void Cartazes::setIdioma(string idioma) 				{this->cidade = cidade;}
void Cartazes::setAssunto(string assunto) 				{this->cidade = cidade;}
void Cartazes::setCondicao(string condicao) 			{this->cidade = cidade;}
void Cartazes::setPalavraChave1(string palavraChave1) 	{this->cidade = cidade;}
void Cartazes::setPalavraChave2(string palavraChave2) 	{this->cidade = cidade;}
