#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "dequeue.hpp"

class Queue : public Dequeue
{

public:
	Queue(int qtd_max)
	{
		if (qtd_max > 0)
		{
			this->qtd_max = qtd_max;
		}
		else
		{
			this->qtd_max = 0;
		}
	}

	bool insert(int num) // insere um elemento na fila e retorna sucesso ou falha na operação
	{
		if (!listaCheia())
		{
			incluiFinal(num);
			return true; // elemento incluido
		}
		return false; // falha ao incluir
	}

	int remove() // remove e retorna o elemento inserido na fila
	{
		return removeInicio();
	}

	int getQtd() // retorna o número de elementos inseridos na fila
	{
		return this->qtd;
	}

	int getFirst() // retorna o elemento inserido na fila sem removê-lo
	{
		if (hasElements())
		{
			return inicio->getValor();
		}
		return -1;
	}

	bool hasElements() // retorna se há ou não elementos inseridos na fila
	{
		return qtd > 0;
	}
};

#endif