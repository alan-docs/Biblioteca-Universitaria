#ifndef TRABALHOSCONCLUSAO_H
#define TRABALHOSCONCLUSAO_H
#include "ItemComum.h"

class TrabalhosConclusao : public ItemComum{

  protected:
    int grauAcademico; //Nível acadêmico para o qual o trabalho foi desenvolvido (por exemplo, graduação, mestrado, doutorado)
    string cidade;
    int numeroPaginas;
    string orientador; //Nome do orientador acadêmico do trabalho.
    string instituicao; //Nome da instituição onde o trabalho foi apresentado.
    string assunto; 
    string palavraChave1;
    string palavraChave2;

  public:
    TrabalhosConclusao(string titulo, string autor, int ano, bool emprestado, int grauAcademico, string cidade, int numeroPaginas, string orientador, string instituicao, string assunto, string palavraChave1, string palavraChave2);
	TrabalhosConclusao();
	~TrabalhosConclusao();
	
	void exibirFicha();
	
	
	 // GET methods
    int getGrauAcademico();
    string getCidade();
    int getNumeroPaginas();
    string getOrientador();
    string getInstituicao();
    string getAssunto();
    string getPalavraChave1();
    string getPalavraChave2();

    // SET methods
    void setGrauAcademico(int grauAcademico);
    void setCidade(string cidade);
    void setNumeroPaginas(int numeroPaginas);
    void setOrientador(string orientador);
    void setInstituicao(string instituicao);
    void setAssunto(string assunto);
    void setPalavraChave1(string palavraChave1);
    void setPalavraChave2(string palavraChave2);
};
#endif

