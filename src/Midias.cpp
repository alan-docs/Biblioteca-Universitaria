#include "Midias.h"

Midias::Midias()
{
}

Midias::~Midias()
{
}

Midias::Midias(string titulo, string autor, int ano, bool emprestado, string duracao, string cidade, string produtora, string idioma, string classificacaoEtaria, string palavraChave1, string palavraChave2) : ItemComum(titulo, autor, ano, emprestado)
{
    setDuracao(duracao);
    setCidade(cidade);
    setProdutora(produtora);
    setIdioma(idioma);
    setClassificacaoEtaria(classificacaoEtaria);
    setPalavraChave1(palavraChave1);
    setPalavraChave2(palavraChave2);
}


void Midias::exibirFicha() {
        cout << getProdutora() << ". " << getTitulo() << " - "
             << getDuracao() << " minutos - " << getCidade() << ": " << getProdutora() << ", " << getAno() << ". "
             << getIdioma() << ". 1. " << getPalavraChave1() << ". li. "
             << getPalavraChave2() << ". Ili. CDU:" << getCDU() << endl;
    }



// GET methods
string Midias::getDuracao() { return duracao; }
string Midias::getCidade() { return cidade; }
string Midias::getProdutora() { return produtora; }
string Midias::getIdioma() { return idioma; }
string Midias::getClassificacaoEtaria() { return classificacaoEtaria; }
string Midias::getPalavraChave1() { return palavraChave1; }
string Midias::getPalavraChave2() { return palavraChave2; }

// SET methods
void Midias::setDuracao(string duracao) { this->duracao = duracao; }
void Midias::setCidade(string cidade) { this->cidade = cidade; }
void Midias::setProdutora(string produtora) { this->produtora = produtora; }
void Midias::setIdioma(string idioma) { this->idioma = idioma; }
void Midias::setClassificacaoEtaria(string classificacaoEtaria) { this->classificacaoEtaria = classificacaoEtaria; }
void Midias::setPalavraChave1(string palavraChave1) { this->palavraChave1 = palavraChave1; }
void Midias::setPalavraChave2(string palavraChave2) { this->palavraChave2 = palavraChave2; }
