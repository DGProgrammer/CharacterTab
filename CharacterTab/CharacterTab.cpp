#include "Character.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <time.h> 
#include <math.h>
#include "rlutil.h"

using namespace rlutil;

int value(int max)
{
	srand(time(NULL));
	return rand() % max + 1;
}

int main()
{
	int a; //Numero total
	int raiz; //Raiz cuadrada
	do {
		printf("Dame un numero culla raiz cuadrada sea exacta: ");
		scanf("%d", &a);
		raiz = sqrt(a); //Hacemos la raiz cuadrada del numero para ver las dimensiones de la cuadricula
	} while ((raiz * raiz) != a); //Comprobamos que sea raiz exacta

	Character_t *lista = new Character_t[a]; //Creamos lista de character_t

	//Creamos un for bidimensional para que nos haga la tabla
	for (int i = 0; i < raiz; i++)
	{
		for (int j = 0; j < raiz; j++)
		{
			int indice = i + j;//Indice del character
			lista[indice] = Character_t(value(50), value(50), value(50), value(50), value(50), value(50)); //Creamos el character pidiendo valores aleatorios
			lista[indice].printInfo(i, j); //Imprimimos la info pasando la x e y en la tabla
		}
	}
}