#include "Periodico.h"

Periodico::Periodico()
{
}

Periodico::~Periodico()
{
}


Periodico::Periodico(string titulo, string autor, int ano, bool emprestado, int numeroEdicao, string cidade, int numeroPaginas, string issn, string editora, string assunto, string palavraChave1, string palavraChave2) : ItemComum(titulo, autor, ano, emprestado)
{
	setNumeroEdicao(numeroEdicao);
    setCidade(cidade);
    setNumeroPaginas(numeroPaginas);
    setISSN(issn);
    setEditora(editora);
    setAssunto(assunto);
    setPalavraChave1(palavraChave1);
    setPalavraChave2(palavraChave2);
}

void Periodico::exibirFicha() {
        cout << getTitulo() << " - " << getNumeroEdicao() << "ª Edição - "
             << getCidade() << ": " << getEditora() << ", " << getAno() << ". "
             << getNumeroPaginas() << " pág.: " << getISSN() << ". "
             << getAssunto() << ". 1. " << getPalavraChave1() << ". li. "
             << getPalavraChave2() << ". Ili. CDU:" << getCDU() << endl;
    }

// GET methods
int Periodico::getNumeroEdicao() { return numeroEdicao; }
string Periodico::getCidade() { return cidade; }
int Periodico::getNumeroPaginas() { return numeroPaginas; }
string Periodico::getISSN() { return issn; }
string Periodico::getEditora() { return editora; }
string Periodico::getAssunto() { return assunto; }
string Periodico::getPalavraChave1() { return palavraChave1; }
string Periodico::getPalavraChave2() { return palavraChave2; }

// SET methods
void Periodico::setNumeroEdicao(int numeroEdicao) { this->numeroEdicao = numeroEdicao; }
void Periodico::setCidade(string cidade) { this->cidade = cidade; }
void Periodico::setNumeroPaginas(int numeroPaginas) { this->numeroPaginas = numeroPaginas; }
void Periodico::setISSN(string issn) { this->issn = issn; }
void Periodico::setEditora(string editora) { this->editora = editora; }
void Periodico::setAssunto(string assunto) { this->assunto = assunto; }
void Periodico::setPalavraChave1(string palavraChave1) { this->palavraChave1 = palavraChave1; }
void Periodico::setPalavraChave2(string palavraChave2) { this->palavraChave2 = palavraChave2; }
