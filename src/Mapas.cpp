#include "Mapas.h"

Mapas::Mapas()
{
}

Mapas::~Mapas()
{
}

Mapas::Mapas(string titulo, string autor, int ano, bool emprestado, string local, string tipo, string idioma, string esacala, string notas, string palavraChave1, string palavraChave2, string coordenadasGeograficas) : ItemComum(titulo, autor, ano, emprestado)
{
	setTipo(tipo);
	setNotas(notas);
	setLocal(local);
	setEscala(escala);
	setIdioma(idioma);
	setPalavraChave1(palavraChave1);
	setPalavraChave2(palavraChave2);
	setCoordenadasGeograficas(coordenadasGeograficas);
}


void Mapas::exibirFicha() {
    cout << getAutor() << ". " << getTitulo() << " - "
         << getLocal() << ". " << getTipo() << ". " << getIdioma() << ". "
         << getEscala() << ". " << getNotas() << ". " << getAno() << ". "
         << getCoordenadasGeograficas() << ". "
         << getPalavraChave1() << ". li. CDU:" << getPalavraChave2() << ". Ili. "
         << getCDU() << endl;
}


//GET methods
string Mapas::getTipo()						{return tipo;}
string Mapas::getNotas()					{return notas;}
string Mapas::getLocal()					{return local;}
string Mapas::getIdioma()					{return idioma;}
string Mapas::getEscala()					{return escala;}
string Mapas::getPalavraChave1()			{return palavraChave1;}
string Mapas::getPalavraChave2()			{return palavraChave2;}
string Mapas::getCoordenadasGeograficas()	{return coordenadasGeograficas;}

//SET methods
void Mapas::setTipo(string tipo) {this->tipo = tipo;}
void Mapas::setNotas(string notas) {this->notas = notas;}
void Mapas::setLocal(string local) {this->local = local;}
void Mapas::setEscala(string escala) {this->escala = escala;}
void Mapas::setIdioma(string idioma) {this->idioma = idioma;}
void Mapas::setPalavraChave1(string palavraChave1) {this->palavraChave1 = palavraChave1;}
void Mapas::setPalavraChave2(string palavraChave2) {this->palavraChave2 = palavraChave2;}
void Mapas::setCoordenadasGeograficas(string coordenadasGeograficas) {this->coordenadasGeograficas = coordenadasGeograficas;}
