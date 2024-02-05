#include "Relatorio.h"

Relatorio::Relatorio()
{
}

Relatorio::Relatorio(string titulo, string autor, int ano, bool emprestado, string cidade, int numeroPaginas, string organizacao, string assunto, string palavraChave1, string palavraChave2) : ItemComum(titulo, autor, ano, emprestado)
{
	setCidade(cidade);
	setAssunto(assunto);
	setOrganizacao(organizacao);
	setNumeroPaginas(numeroPaginas);
	setPalavraChave1(palavraChave1);
	setPalavraChave2(palavraChave2);
}

Relatorio::~Relatorio()
{
}



void Relatorio::exibirFicha() {
        cout << getAutor() << ". " << getTitulo() << " - "
             << getCidade() << ": " << getOrganizacao() << ", " << getAno() << ". "
             << getNumeroPaginas() << " pág.: " << getAssunto() << ". 1. " << getPalavraChave1() << ". li. "
             << getPalavraChave2() << ". Ili. CDU:" << getCDU() << endl;
    }



// GET methods
string Relatorio::getCidade()			{	return cidade;			}
string Relatorio::getAssunto()			{	return assunto;			}
int Relatorio::getNumeroPaginas() 		{	return numeroPaginas;	}
string Relatorio::getOrganizacao()		{	return organizacao;		}
string Relatorio::getPalavraChave1()	{	return palavraChave1;	}
string Relatorio::getPalavraChave2()	{	return palavraChave2;	}




// SET methods
void Relatorio::setCidade(string cidade) 				{this->cidade 			= cidade;		}
void Relatorio::setAssunto(string assunto) 				{this->assunto 			= assunto;		}
void Relatorio::setOrganizacao(string organizacao)		{this->organizacao		= organizacao;	}
void Relatorio::setNumeroPaginas(int numeroPaginas) 	{this->numeroPaginas 	= numeroPaginas;}
void Relatorio::setPalavraChave1(string palavraChave1) 	{this->palavraChave1 	= palavraChave1;}
void Relatorio::setPalavraChave2(string palavraChave2) 	{this->palavraChave2 	= palavraChave2;}
