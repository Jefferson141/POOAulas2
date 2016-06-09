#include <iostream> // Está são as Bibliotecas
#include <string> // Biblioteca
#include <ctime> // Gera o Tempo

using namespace std; // Permite a entrada de todas as Bibliotecas na Função Principal

int main() // Abrindo a Função Principal
{
	int Vida1 = 20, Vida2 = 20; // Vida de Ambos Jogadores
	int dano1 = 0, dano2 = 0; // Dano causado em Ambos
	string P1, P2;
	bool sair = false; // Variável do tipo BULEANA, e está declarando a Variável

	cout << "\aDigite o nome do player 1" << endl; // Aqui pede o nome do player1
	cin >> P1; recebe o nome do Jogador1
	cout << "\aDigite o nome do player 2" << endl; // Pede o nome do Player2
	cin >> P2; // recebe o nome do Jogador2

	while (sair == false) // Está abrindo o Laço e se SAIR for VERDADEIRO o jogo de encerra
	{
		cout << "-" << dano1 << "                   -" << dano2 << endl; // Os dois estão imprimindo o Dano dos Jogadores
		cout << " o                   o  " << endl; // Imprimindo a parte do corpo de meu Personagem
		cout << ".T./               \\.T." << endl; // Imprimindo a parte do corpo de meu Personagem
		cout << " ^                   ^  " << endl; // Imprimindo a parte do corpo de meu Personagem
		cout << P1 << "                " << P2 << endl; // Está imprimindo o Nome dos Jogadores
		cout << "Vida: " << Vida1 << "         " << " Vida: " << Vida2 << endl; // Imprimindo o Status de Vida dos Jogadores
		cout << "Atk: 2" << "         " << "Atk: 2" << endl; // Imprimindo o Status de Ataque "Força" dos Jogadores
		cout << "Def: 4" << "         " << "Def: 4" << endl; // Imprimindo o Status de Defesa "Resistência" dos Jogadores

		int dado6; // Declarando a Variável
		srand((int)time(0)); // Está Gerando a Semente: "Para gerar números Aleatorios"

		dado6 = rand() % 6 + 1; // Está Gerando números de 1 a 6
		dano1 = dado6 - 4; // Está Calculando o Dano causado pelo Jogador1
		if (dado6 < 4) // Se o Dano for menor do que 4 o Jogador errará o Ataque
		{
			dano1 = 0; // Valor do Dano após as Rodadas "Jogador1"
		}
		Vida1 = Vida1 - dano1; // Calculo da Vida do Jogador1

		dado6 = rand() % 6 + 1; // Está Gerando os números de 1 a 6
		dano2 = dado6 - 4; // Está Calculando o Dano causado pelo jogador2
		if (dado6 < 4) // Se o Dano for menor do que 4 o Jogador errará o Ataque
		{
			dano2 = 0; // Valor do Dano após as Rodadas "Jogador2"
		}
		Vida2 = Vida2 - dano2; // Calculo da Vida do Jogador2
		system("pause"); // Pausa o Programa até o Ponto Atual

		cout << "Vida: " << Vida1 << "         " << "Vida: " << Vida2 << endl; // Está Imprimindo a Vida dos dois Jogadores

		if (Vida1 <= 0 || Vida2 <= 0) // Se um dos Jogadores ficar com vida menor ou igual a 0
		{
			sair = true; // O Jogo Acabará
		}
		system("cls"); // Limpando a Tela
	}
	cout << "Game Over" << endl; // Imprime na Tela o Fim do Jogo
	if (Vida1 > 0) cout << "Vitoria de: " << P1 << endl; // se a vida ao fim do jogo do jogador1 for maior que 0 ele Vence
	else if (Vida2 > 0) cout << "Vitoria de: " << P2 << endl; // se a vida ao fim do jogo do jogador2 for maior que 0 ele Vence
	else cout << "Ambos Perderam" << endl; // Se a vidas de Ambos jogadores forem menor ou igual que zero eles perderam

	return 0; // Finaliza o Programa
}
