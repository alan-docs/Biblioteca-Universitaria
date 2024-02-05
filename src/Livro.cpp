#include "Livro.h"

Livro::Livro()
{
}

Livro::Livro(string titulo, string autor, int ano, bool emprestado, int numeroEdicao, string cidade, int numeroPaginas, string isbn, string editora, string assunto, string palavraChave1, string palavraChave2) : ItemComum(titulo, autor, ano, emprestado)
{
	setIsbn(isbn);
	setCidade(cidade);
	setEditora(editora);
	setAssunto(assunto);
	setNumeroEdicao(numeroEdicao);
	setNumeroPaginas(numeroPaginas);
	setPalavraChave1(palavraChave1);
	setPalavraChave2(palavraChave2);
}

Livro::~Livro()
{
}


void Livro::exibirFicha() {
    cout << getAutor() << ". " << getTitulo() << " -" << getNumeroEdicao() << "ª Edição - "
         << getCidade() << ": " << getEditora() << ", " << getAno() << ". "
         << getNumeroPaginas() << " pág.: " << getIsbn() << ". "
         << getAssunto() << ". 1. " << getPalavraChave1() << ". li. "
         << getPalavraChave2() << ". Ili. CDU:" << getCDU() << endl;
}





// GET methods
string Livro::getIsbn()				{	return isbn;			}
string Livro::getCidade()			{	return cidade;			}
string Livro::getEditora()			{	return editora;			}
string Livro::getAssunto()			{	return assunto;			}
int Livro::getNumeroEdicao()		{	return numeroEdicao;	}
int Livro::getNumeroPaginas() 		{	return numeroPaginas;	}
string Livro::getPalavraChave1()	{	return palavraChave1;	}
string Livro::getPalavraChave2()	{	return palavraChave2;	}




// SET methods
void Livro::setIsbn(string isbn) 					{this->isbn 			= isbn;			}
void Livro::setCidade(string cidade) 				{this->cidade 			= cidade;		}
void Livro::setEditora(string editora) 				{this->editora 			= editora;		}
void Livro::setAssunto(string assunto) 				{this->assunto 			= assunto;		}
void Livro::setNumeroEdicao(int numeroEdicao) 		{this->numeroEdicao 	= numeroEdicao;	}
void Livro::setNumeroPaginas(int numeroPaginas) 	{this->numeroPaginas 	= numeroPaginas;}
void Livro::setPalavraChave1(string palavraChave1) 	{this->palavraChave1 	= palavraChave1;}
void Livro::setPalavraChave2(string palavraChave2) 	{this->palavraChave2 	= palavraChave2;}
