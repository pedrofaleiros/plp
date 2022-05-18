#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "dequeue.hpp"

class Stack : public Dequeue
{
public:
	Stack(int qtd_max)
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

	bool push(int num) // insere um elemento na pilha e retorna sucesso ou falha na operação
	{
		if (!listaCheia())
		{
			incluiFinal(num);
			return true; // elemento incluido
		}
		return false; // falha ao incluir
	}

	int pop() //  remove e retorna o elemento inserido na pilha
	{
		return removeFinal();
	}

	int getQtd() // retornar o número de elementos inseridos na pilha
	{
		return this->qtd;
	}

	int getTopo() // retorna o elemento inserido na pilha sem removê-lo
	{
		if (hasElements())
		{
			return fim->getValor();
		}
		return -1;
	}

	bool hasElements() // retorna se há ou não elementos inseridos na pilha
	{
		return qtd > 0;
	}
};

#endif