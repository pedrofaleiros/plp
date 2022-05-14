#include "pilha.hpp"
#include "fila.hpp"
#include <iostream>

using namespace std;

int main()
{
	Fila f = Fila(3);

	f.insert(1);
	f.insert(2);
	f.insert(3);

	f.mostrar();

	return 0;
}
