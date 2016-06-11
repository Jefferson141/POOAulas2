#include <iostream> // Biblioteca
#include <ctime> // Biblioteca
using namespace std; // Não optar por escrever "std"

void imprimir_espacos(int rodada); // Declarando a função de espaços
int main() // Função principal
{
	int total_espacos = 50; // Espaços até o final
	int espacos_1 = 0; // Espaços percorrido pelo Carrinho1
	int espacos_2 = 0; // Espaços percorrido pelo Carrinho2 
	while (espacos_1 < total_espacos && espacos_2 < total_espacos) // Sai do laço quando a Corrida Termina
	{
		system("cls"); // Limpa a tela
		cout << "Jogo da corrida Maluca" << endl; // Está imprimindo o nome do jogo
		cout << "                                                finish!" << endl; // Está imprimindo o fim da corrida

		srand((int)time(0)); // Colocando a semente apartir do tempo
	
		espacos_1 = rand() % 3 + 1 + espacos_1; // Gerando números aleatórios de 1 a 3
		imprimir_espacos(espacos_1); // Está imprimindo espaços
		cout << "  _  " << endl; // Está imprimindo uma parte do carrinho
		imprimir_espacos(espacos_1); // Está imprimindo espaços do carrinho 1
		cout << "-o-o>" << endl; // Está imprimindo a outra parte que completa o carrinho

		espacos_2 = rand() % 3 + 1 + espacos_2; // gerando números aleatórios de 1 a 3
		imprimir_espacos(espacos_2); // Está imprimindo espaços
		cout << "  _  " << endl; // Está imprimindo uma parte do carrinho
		imprimir_espacos(espacos_2); // Está imprimindo espaços do carrinho 2
		cout << "-o-o>" << endl; // Está imprimindo a outra parte que completa o carrinho
	} // fim do laço
	if (espacos_1 > espacos_2) cout << "Carro 1 venceu a corrida!" << endl; ; // Imprimi na tela que o "Carro 1 venceu!" se o carro 1 vencer
	else if (espacos_2 > espacos_1) cout << "Carro 2 venceu a corrida!" << endl; ; // Imprimi na tela que o "Carro 2 venceu!" se o carro 2 vencer
	else cout << "Empate!" << endl; ; // Imprimir na tela "Empate" se ambos dos carrinhos não vencerem
	return 0; // Término do jogo
} // Fim

void imprimir_espacos(int rodada) // Função que imprime os espaços
{ // Início da função que irá imprimir os espaços
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++) //imprime os espaços
	{ // Laço que imprime os espaços
		cout << " "; // Imprimindo os espaços
	} // Fim do laço que imprime os espaços
} // Fim da função
