#include "Biblioteca.h"
#include "Livro.h"
#include "Relatorio.h"
#include "Cartazes.h"
#include "Mapas.h"
#include "Midias.h"
#include "Periodico.h"
#include "TrabalhosConclusao.h"

Biblioteca::Biblioteca()
{
}

Biblioteca::~Biblioteca()
{
}


void Biblioteca::pesquisarItem(){
	string titulo;
	
	cout << "Insira o t�tulo do item que voc� deseja pesquisar: ";
	cin >> titulo;
	ClearInputEntry::inputClear(); // Limpar o buffer de entrada
	cout << endl << endl;
	
	for(vector<ItemComum*>::iterator it = listItem.begin(); it != listItem.end();it++){
		if(((*it)->getTitulo() == titulo) && ((*it)->getEmprestado() != true)){
			cout << "=========================================================================================================" << endl << "|" << endl;
			(*it)->exibirFicha();
			cout << "|" << endl << "=========================================================================================================" << endl << endl;
		}
	}
}



void Biblioteca::adicionaLivro(){
  string titulo, autor, cidade, isbn, editora, assunto, palavrachave1, palavrachave2;
  int ano, numeroedicao, numeropaginas;
  bool emprestado;


  cout << "Insira o t�tulo do livro: ";
  cin >> titulo;
  ClearInputEntry::inputClear();
  cout << endl << "Insira o autor do livro: ";
  cin >> autor;
  ClearInputEntry::inputClear();
  cout << endl << "Insira o ano de lan�amento do livro: ";
  cin >> ano;
  ClearInputEntry::inputClear();
  cout << endl << "Insira o isbn do livro: ";
  cin >> isbn;
  ClearInputEntry::inputClear();
  cout << endl << "Insira a editora do livro: ";
  cin >> editora;
  ClearInputEntry::inputClear();
  cout << endl << "Insira o assunto do livro: ";
  cin >> assunto;
  ClearInputEntry::inputClear();
  cout << endl << "Insira o n�mero da edi��o do livro: ";
  cin >> numeroedicao;
  ClearInputEntry::inputClear();
  cout << endl << "Insira a cidade onde o livro foi pubicado: ";
  cin >> cidade;
  ClearInputEntry::inputClear();
  cout << endl << "Insira o n�mero de p�ginas do livro: ";
  cin >> numeropaginas;
  ClearInputEntry::inputClear();
  cout << endl << "Insira a primeira palavra chave do livro: ";
  cin >> palavrachave1;
  ClearInputEntry::inputClear();
  cout << endl << "Insira a segunda palavra chave do livro: ";
  cin >> palavrachave2;
  ClearInputEntry::inputClear();
  cout << endl;
  emprestado = 0;

  Livro* L1 = new Livro(titulo, autor, ano, emprestado, numeroedicao, cidade, numeropaginas, isbn, editora, assunto, palavrachave1, palavrachave2);
  listItem.push_back(L1);
} 

void Biblioteca::adicionaRelatorio(){
    string titulo, autor, cidade, organizacao, assunto, palavrachave1, palavrachave2;
    int ano, numeropaginas;
    bool emprestado;
    
    cout << "Insira o t�tulo do relat�rio: ";
    cin >> titulo;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o autor do relat�rio: ";
    cin >> autor;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o ano de lan�amento do relat�rio: ";
    cin >> ano;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a cidade do lan�amento do relat�rio: ";
    cin >> cidade;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o assunto do relat�rio: ";
    cin >> assunto;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o nome da organiza��o que emitiu o relat�rio: ";
    cin >> organizacao;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o n�mero de p�ginas do relat�rio: ";
    cin >> numeropaginas;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a primeira palavra chave do relat�rio: ";
    cin >> palavrachave1;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a segunda palavra chave do relat�rio: ";
    cin >> palavrachave2;
    ClearInputEntry::inputClear();
    cout << endl;
    emprestado = 0;

    Relatorio* R1 = new Relatorio(titulo, autor, ano, emprestado, cidade, numeropaginas, organizacao, assunto, palavrachave1, palavrachave2);
	listItem.push_back(R1);
}

void Biblioteca::adicionaCartazes(){
	string titulo, autor, cidade, genero, idioma, condicao, assunto, palavrachave1, palavrachave2;
	int ano;
	bool emprestado;
	
	cout << "Insira o t�tulo do cartaz: ";
	cin >> titulo;
	
    cout << endl << "Insira o autor do cartaz: ";
	cin >> autor;
	
    cout << endl << "Insira o ano de lan�amento do cartaz: ";
	cin >> ano;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a cidade do lan�amento do cartaz: ";
	cin >> cidade;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o assunto do cartaz: ";
	cin >> assunto;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o idioma do cartaz: ";
	cin >> idioma;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o g�nero do cartaz: ";
	cin >> genero;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a condi��o f�sica do cartaz: ";
	cin >> condicao;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a primeira palavra chave do cartaz: ";
	cin >> palavrachave1;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a segunda palavra chave do relat�rio: ";
	cin >> palavrachave2;
	ClearInputEntry::inputClear();
    cout << endl;
	emprestado = 0;
	
	Cartazes* C1 = new Cartazes(titulo, autor, ano, emprestado, cidade, genero, idioma, condicao, assunto, palavrachave1, palavrachave2);
	listItem.push_back(C1);

}

void Biblioteca::adicionaMapas(void){
	string titulo, autor, local, tipo, idioma, esacala, notas, palavrachave1, palavrachave2, cordenadasgeograficas;
	int ano;
	bool emprestado;
	
	cout << "Insira o t�tulo do mapa: ";
	cin >> titulo;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o autor do mapa: ";
	cin >> autor;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o ano de lan�amento do mapa: ";
	cin >> ano;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a localiza��o que � representada pelo mapa: ";
	cin >> local;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o tipo do mapa: ";
	cin >> tipo;
	ClearInputEntry::inputClear();
    cout << endl << "Insira o idioma do mapa: ";
	cin >> idioma;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a escala do mapa: ";
	cin >> esacala;
	ClearInputEntry::inputClear();
    cout << endl << "Insira notas sobre o mapa, como informa��es importantes: ";
	cin >> notas;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a primeira palavra chave do mapa: ";
	cin >> palavrachave1;
	ClearInputEntry::inputClear();
    cout << endl << "Insira a segunda palavra chave do mapa: ";
	cin >> palavrachave2; 
	ClearInputEntry::inputClear();
    cout << endl << "Insira as cordenadas geograficas do mapa: ";
	cin >> cordenadasgeograficas;
	ClearInputEntry::inputClear();
    cout << endl;
	emprestado = 0;  
	
	Mapas* M1 = new Mapas(titulo, autor, ano, emprestado, local, tipo, idioma, esacala, notas, palavrachave1, palavrachave2, cordenadasgeograficas);
	listItem.push_back(M1);
	
	
}




void Biblioteca::adicionaMidias() {
    string titulo, autor, duracao, cidade, genero, idioma, classificacaoEtaria, palavraChave1, palavraChave2;
    int ano;
    bool emprestado;

    cout << "Insira o t�tulo da m�dia: ";
    cin >> titulo;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o autor da m�dia: ";
    cin >> autor;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o ano de lan�amento da m�dia: ";
    cin >> ano;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a dura��o da m�dia em minutos: ";
    cin >> duracao;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a cidade associada � m�dia: ";
    cin >> cidade;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o g�nero da m�dia: ";
    cin >> genero;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o idioma da m�dia: ";
    cin >> idioma;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a classifica��o et�ria da m�dia: ";
    cin >> classificacaoEtaria;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a primeira palavra chave da m�dia: ";
    cin >> palavraChave1;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a segunda palavra chave da m�dia: ";
    cin >> palavraChave2;
    ClearInputEntry::inputClear();
    cout << endl;
    emprestado = false;

    Midias* M1 = new Midias(titulo, autor, ano, emprestado, duracao, cidade, genero, idioma, classificacaoEtaria, palavraChave1, palavraChave2);
    listItem.push_back(M1);
}




void Biblioteca::adicionaPeriodico() {
    string titulo, autor, cidade, issn, editora, assunto, palavraChave1, palavraChave2;
    int ano, numeroEdicao, numeroPaginas;
    bool emprestado;

    cout << "Insira o t�tulo do peri�dico: ";
    cin >> titulo;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o autor do peri�dico: ";
    cin >> autor;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o ano de lan�amento do peri�dico: ";
    cin >> ano;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o n�mero de edi��es do peri�dico: ";
    cin >> numeroEdicao;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a cidade associada ao peri�dico: ";
    cin >> cidade;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o n�mero de p�ginas do peri�dico: ";
    cin >> numeroPaginas;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o ISSN do peri�dico: ";
    cin >> issn;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a editora do peri�dico: ";
    cin >> editora;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o assunto do peri�dico: ";
    cin >> assunto;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a primeira palavra chave do peri�dico: ";
    cin >> palavraChave1;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a segunda palavra chave do peri�dico: ";
    cin >> palavraChave2;
    ClearInputEntry::inputClear();
    cout << endl;
    emprestado = false;

    Periodico* P1 = new Periodico(titulo, autor, ano, emprestado, numeroEdicao, cidade, numeroPaginas, issn, editora, assunto, palavraChave1, palavraChave2);
    listItem.push_back(P1);
}





void Biblioteca::adicionaTrabalhoConclusao() {
    string titulo, autor, cidade, orientador, instituicao, assunto, palavraChave1, palavraChave2;
    int ano, numeroPaginas, grauAcademico;
    bool emprestado;

    cout << "Insira o t�tulo do trabalho de conclus�o: ";
    cin >> titulo;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o autor do trabalho de conclus�o: ";
    cin >> autor;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o ano de apresenta��o do trabalho de conclus�o: ";
    cin >> ano;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o orientador do trabalho de conclus�o: ";
    cin >> orientador;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a institui��o onde o trabalho foi apresentado: ";
    cin >> instituicao;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a cidade onde se localiza a sua institui��o: ";
    cin >> cidade;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o grau acad�mico associado ao trabalho de conclus�o: ";
    cin >> grauAcademico;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o n�mero de p�ginas do trabalho de conclus�o: ";
    cin >> numeroPaginas;
    ClearInputEntry::inputClear();
    cout << endl << "Insira o assunto do trabalho de conclus�o: ";
    cin >> assunto;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a primeira palavra chave do trabalho de conclus�o: ";
    cin >> palavraChave1;
    ClearInputEntry::inputClear();
    cout << endl << "Insira a segunda palavra chave do trabalho de conclus�o: ";
    cin >> palavraChave2;
    ClearInputEntry::inputClear();
    cout << endl;
    emprestado = false;

    TrabalhosConclusao* TC1 = new TrabalhosConclusao(titulo, autor, ano, emprestado, grauAcademico, cidade, numeroPaginas, orientador, instituicao, assunto, palavraChave1, palavraChave2);
    listItem.push_back(TC1);
}


void Biblioteca::pegarEmprestado()
{
	int CDU;
	pesquisarItem();
	cout << endl << "Digite o CDU do item que deseja pegar emprestado: ";
	cin >> CDU;
	ClearInputEntry::inputClear(); // Limpar o buffer de entrada
	cout << endl << endl;
	
	for(vector<ItemComum*>::iterator it = listItem.begin(); it != listItem.end();it++){
		if((*it)->getCDU() == CDU){
			cout << "O item: " << endl;
			(*it)->exibirFicha();
			cout << "Foi pego emprestado e n�o estar� dispon�vel para consulta at� sua devolu��o." << endl << endl << endl;
			
			(*it)->setEmprestado(true);
			break;
		}
	}
	
}




void Biblioteca::removerItem()
{
	int CDU;
	pesquisarItem();
	cout << endl << "Digite o CDU do item que deseja remover: ";
	cin >> CDU;
	ClearInputEntry::inputClear(); // Limpar o buffer de entrada
	cout << endl << endl;
	
	vector<ItemComum*>::iterator it = listItem.begin();
	while (it != listItem.end()) {
	    if ((*it)->getCDU() == CDU) {
	        (*it)->setEmprestado(true);
	        it = listItem.erase(it);
	        break;
	    } else {
	        ++it;
	    }
	}
	
}
