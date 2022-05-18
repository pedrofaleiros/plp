#include "stack.hpp"
#include "queue.hpp"
#include <iostream>

using namespace std;

int main()
{
	int num;
	bool aux;
	Queue fila = Queue(5); // Cria uma fila com numero maximo de 5 elementos

	printf("\nQueue:");
	//a) inserir um elemento na fila, retornando o sucesso ou a falha na operação;
	fila.insert(1);
	fila.insert(2);
	aux = fila.insert(3); // retorna false se a lista estiver cheia
	aux ? printf("\n Inserido com sucesso") : printf("\n falha ao inserir");

	//b) remover e retornar o elemento inserido na fila (retorna -1 caso a fila nao possua nenhum elemento)
	num = fila.remove();
	num != -1 ? printf("\n Numero removido: %d", num) : printf("\n a fila nao possui elementos");

	//c) retornar o elemento inserido na fila, sem removê-lo
	num = fila.getLast();
	num != -1 ? printf("\n Elemento inserido: %d", num) : printf("\n a fila nao possui elementos");

	//d) retornar o número de elementos inseridos na fila;
	num = fila.getQtd();
	printf("\n Quantidade de elementos na fila: %d", num);

	//e) retornar se há ou não elementos inseridos na fila
	aux = fila.hasElements();
	aux ? printf("\n Tem elementos") : printf("\n nao tem elementos");

	///////////////////////////////////////////////////////
	Stack pilha = Stack(5); // Cria uma pilha com numero maximo de 5 elementos

	printf("\n\nStack:");

	//a) inserir um elemento na pilha, retornando o sucesso ou a falha na operação;
	pilha.push(1);
	pilha.push(2);
	aux = pilha.push(3); // retorna false se a lista estiver cheia
	aux ? printf("\n Inserido com sucesso") : printf("\n falha ao inserir");

	//b) remover e retornar o elemento inserido na pilha (retorna -1 caso a pilha nao possua nenhum elemento)
	num = pilha.pop();
	num != -1 ? printf("\n Numero removido: %d", num) : printf("\n a pilha nao possui elementos");

	//c) retornar o elemento inserido na pilha, sem removê-lo
	num = pilha.getTopo();
	num != -1 ? printf("\n Elemento inserido: %d", num) : printf("\n a pilha nao possui elementos");

	//d) retornar o número de elementos inseridos na pilha;
	num = pilha.getQtd();
	printf("\n Quantidade de elementos na pilha: %d", num);

	//e) retornar se há ou não elementos inseridos na pilha
	aux = pilha.hasElements();
	aux ? printf("\n Tem elementos") : printf("\n nao tem elementos");

	return 0;
}
