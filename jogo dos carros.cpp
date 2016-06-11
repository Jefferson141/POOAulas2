#include <iostream> // Biblioteca
#include <ctime> // Biblioteca
using namespace std; // Para não Precisar escrever "std"
// Linha para deixar o programa "Bonitinho", "Organizado", para ter uma boa compreensão
void imprimir_espacos(int rodada);// Aqui está Declarando a função que imprime os espaços
int main() // Função Principal
{ // Começo da Função principal
	int total_espacos = 50;// Quantidade de espaços até a chegada
	int espacos_a = 0; // Quantidade de espaços que o carrinho A percorreu
	int espacos_b = 0; // Quantidade de espaços que o carrinho B percorreu
	while (espacos_a < total_espacos && espacos_b < total_espacos) // Sairá do laço ao chegar na chegada, ou seja, Fim da corrida
	{ // Inicio do laço da corrida
		system("cls"); // Aqui Limpa a tela
		cout << "Jogo de corrida" << endl; // Imprimindo "Jogo de corrida", é uma espécie de apresentação do jogo
		cout << "                                                Chegada:" << endl; // Aqui está Imprimindo a chegada
	// Linha para deixar o programa "Bonitinho", "Organizado", para ter uma boa compreensão
		srand((int)time(0)); // Gerando semente a partir do tempo
		//Carro A//Comentando o bloco de codigos do carro A para melhor compreenção
		espacos_a = rand() % 3 + 1 + espacos_a;//Gerando número aleatório de 1 a 3 para andar o carro A nesta quantidade em espaços
		imprimir_espacos(espacos_a);//Imprimindo espaços
		cout << "  _  " << endl;//Imprimindo parte do carro A
		imprimir_espacos(espacos_a);//Imprimindo espaços
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro A
		//Carro B//Comentando o bloco de codigos do carro B para melhor compreenção
		espacos_b = rand() % 3 + 1 + espacos_b;//Gerando número aleatório de 1 a 3 para andar o carro B nesta quantidade em espaços
		imprimir_espacos(espacos_b);//Imprimindo espaços
		cout << "  _  " << endl;//Imprimindo parte do carro B
		imprimir_espacos(espacos_b);//Imprimindo espaços
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro B
	}//Fim do laço da corrida
	if (espacos_a > espacos_b) cout << "Carro A venceu a corrida!" << endl; // Imprimir na tela: "Carro A venceu a corrida!" se caso o carro A vencer a corrida
	else if (espacos_b > espacos_a) cout << "Carro B venceu a corrida!" << endl; // Imprimir na tela: "Carro B venceu a corrida!" se caso o carro B vencer a corrida
	else cout << "Empate!" << endl; // Imprimir na tela "Empate" se ambos dos carros vencer
	return 0; // Aqui Fecha o jogo
} // Fim da Função  principal
// Linha para deixar o programa "Bonitinho", "Organizado", para ter uma boa compreensão
void imprimir_espacos(int rodada) // Função que imprime os espaços
{//Inicio da função que imprime os espaços
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++) // Imprimir os espaços
	{ // Inicio do laço que imprime os espaços
	 	cout << " "; // Imprimindo os espaços
	} // Fim do laço que imprime os espaços
} // Fim da função que imprime os espaços
