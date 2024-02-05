#include "TrabalhosConclusao.h"

TrabalhosConclusao::TrabalhosConclusao()
{
}

TrabalhosConclusao::~TrabalhosConclusao()
{
}


TrabalhosConclusao::TrabalhosConclusao(string titulo, string autor, int ano, bool emprestado, int grauAcademico, string cidade, int numeroPaginas, string orientador, string instituicao, string assunto, string palavraChave1, string palavraChave2) : ItemComum(titulo, autor, ano, emprestado)
{
	setGrauAcademico(grauAcademico);
	setCidade(cidade);
	setNumeroPaginas(numeroPaginas);
	setOrientador(orientador);
	setInstituicao(instituicao);
	setAssunto(assunto);
	setPalavraChave1(palavraChave1);
	setPalavraChave2(palavraChave2);
}



void TrabalhosConclusao::exibirFicha() {
        cout << getAutor() << ". " << getTitulo() << " - "
             << getGrauAcademico() << " - " << getCidade() << ": " << getInstituicao() << ", " << getAno() << ". "
             << getNumeroPaginas() << " pág.: " << getAssunto() << ". 1. " << getPalavraChave1() << ". li. "
             << getPalavraChave2() << ". Ili. CDU:" << getCDU() << endl;
}



// GET methods
int TrabalhosConclusao::getGrauAcademico() { return grauAcademico; }
string TrabalhosConclusao::getCidade() { return cidade; }
int TrabalhosConclusao::getNumeroPaginas() { return numeroPaginas; }
string TrabalhosConclusao::getOrientador() { return orientador; }
string TrabalhosConclusao::getInstituicao() { return instituicao; }
string TrabalhosConclusao::getAssunto() { return assunto; }
string TrabalhosConclusao::getPalavraChave1() { return palavraChave1; }
string TrabalhosConclusao::getPalavraChave2() { return palavraChave2; }



// SET methods
void TrabalhosConclusao::setGrauAcademico(int grauAcademico) { this->grauAcademico = grauAcademico; }
void TrabalhosConclusao::setCidade(std::string cidade) { this->cidade = cidade; }
void TrabalhosConclusao::setNumeroPaginas(int numeroPaginas) { this->numeroPaginas = numeroPaginas; }
void TrabalhosConclusao::setOrientador(std::string orientador) { this->orientador = orientador; }
void TrabalhosConclusao::setInstituicao(std::string instituicao) { this->instituicao = instituicao; }
void TrabalhosConclusao::setAssunto(std::string assunto) { this->assunto = assunto; }
void TrabalhosConclusao::setPalavraChave1(std::string palavraChave1) { this->palavraChave1 = palavraChave1; }
void TrabalhosConclusao::setPalavraChave2(std::string palavraChave2) { this->palavraChave2 = palavraChave2; }

