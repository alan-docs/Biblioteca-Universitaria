#ifndef MAPAS_H
#define MAPAS_H

#include "ItemComum.h"

class Mapas : public ItemComum
{
  protected:
    string local; //local representado
    string tipo; //como mapa topográfico, mapa político, mapa geológico, etc.
    string idioma;
    string escala;
    string notas; //Informações relevantes, como a presença de edições especiais, dados históricos, etc.
    string palavraChave1;
    string palavraChave2;
    string coordenadasGeograficas;


  public:
	Mapas();
	~Mapas();
	Mapas(string titulo, string autor, int ano, bool emprestado, string local, string tipo, string idioma, string escala, string notas, string palavraChave1, string palavraChave2, string coordenadasGeograficas);
    
    
    void exibirFicha();
    
    
	//Getters
	string getTipo();
	string getNotas();
	string getLocal();
	string getEscala();
	string getIdioma();
	string getCoordenadasGeograficas();
	string getPalavraChave1();
	string getPalavraChave2();
	
	//Setters
	void setTipo(string tipo);
	void setNotas(string notas);
	void setLocal(string local);
	void setEscala(string escala);
	void setIdioma(string idioma);
	void setCoordenadasGeograficas(string coordenadasGeograficas);
	void setPalavraChave1(string palavraChave1);
	void setPalavraChave2(string palavraChave2);

};
#endif
