/*
=========================================

  Alan Cezar Cromal Lourenço das Dores

=========================================
*/




#include <iostream>
#include "ItemComum.h"
#include "Biblioteca.h"



int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");
	//string parameter[] = {"Autor 1.", " Autor 2.", "Título da Obra", "-nª Edição", " - Cidade: Editora, ", "Ano.", " nnn pág.: nn cm. ", "ISBN: nn-nnnn-nnn-n1. ", "Assunto. 1. ", "Palavra-chave 1. ", "li. Palavra-chave 2. ", "Ili. Título.", "CDU: nnn.nn:nnn.nn"};
	//cout << sizeof(parameter)/sizeof(parameter[0]);
	//ItemComum *ic = new ItemComum();
	//ic->fichaGenerica(parameter);
	Biblioteca* biblioteca = new Biblioteca();
	
	int op;
	do {
	cout << "\n==========================================\n";
	cout << "|      Menu principal da Biblioteca      |\n";
	cout << "==========================================\n";
	cout << "|   1. Cadastrar Item                    |\n";
	cout << "|   2. Pesquisar Itens                   |\n";
	cout << "|   3. Pegar item emprestado             |\n";
	cout << "|   4. Remover item do acervo            |\n";
	cout << "|   0. Sair                              |\n";
	cout << "------------------------------------------\n\n";
	cout << "Escolha uma opção: ";
	cin >> op;
	ClearInputEntry::inputClear(); // Limpar o buffer de entrada
	
	if (op == 1) {
	    int opcao;
	    do {
	        cout << "\n-----Menu da Biblioteca-----\n";
	        cout << "1. Adicionar Livro\n";
	        cout << "2. Adicionar Periódico\n";
	        cout << "3. Adicionar Trabalho de Conclusão\n";
	        cout << "4. Adicionar Relatório\n";
	        cout << "5. Adicionar Mídia\n";
	        cout << "6. Adicionar Cartaz\n";
	        cout << "7. Adicionar Mapa\n";
	        cout << "0. Voltar ao Menu principal\n";
	        cout << "Escolha uma opção: ";
	        cin >> opcao;
	        ClearInputEntry::inputClear(); // Limpar o buffer de entrada
	        cout << endl << endl;
	
	        switch (opcao) {
	            case 1:
	                biblioteca->adicionaLivro();
	                break;
	            case 2:
	                biblioteca->adicionaPeriodico();
	                break;
	            case 3:
	                biblioteca->adicionaTrabalhoConclusao();
	                break;
	            case 4:
	                biblioteca->adicionaRelatorio();
	                break;
	            case 5:
	                biblioteca->adicionaMidias();
	                break;
	            case 6:
	                biblioteca->adicionaCartazes();
	                break;
	            case 7:
	                biblioteca->adicionaMapas();
	                break;
	            case 0:
	                cout << "Retornando ao menu principal do programa" << endl;
	                break;
	            default:
	                cout << "Opção inválida. Tente novamente.\n";
	        }
	    } while (opcao != 0);
	
	} else if (op == 2) {
	    // PESQUISA DE ITEM POR NOME
	    biblioteca->pesquisarItem();
	} else if (op == 3) {
	    biblioteca->pegarEmprestado();
	} else if (op == 4) {
	    biblioteca->removerItem();
	} else if (op == 0) {
	    cout << "Saindo do programa. Obrigado!" << endl;
	} else {
	    cout << "Opção inválida. Tente novamente." << endl;
	}
	} while (op != 0);
	
	
	return 0;
}
