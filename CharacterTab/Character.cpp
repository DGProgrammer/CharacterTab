#include "Character.h"
#include <cstdlib>
#include "rlutil.h"

#define MAX_SIZE_X 11
#define MAX_SIZE_Y 9
#define SUM_X (x* MAX_SIZE_X)
#define SUM_Y (y* MAX_SIZE_Y)
using namespace rlutil;

Character_t::Character_t(int FUE, int DES, int CON, int INT, int SAB, int CAR)
{
	m_FUE = FUE;
	m_DES = DES;
	m_CON = CON;
	m_INT = INT;
	m_SAB = SAB;
	m_CAR = CAR;
}

void printTab(int x, int y)
{
	int line = 1+ SUM_Y; //Posicion y
	int column = 1 + SUM_X; //Posicion x
	//For bidimensional para la tabla
	for (int c= column; c <= MAX_SIZE_X + SUM_X; c++)
	{
		for (int l= line; l <= MAX_SIZE_Y + SUM_Y; l++)
		{
			locate(c, l);
			setColor(GREEN);
			if (l == 1 + SUM_Y || l == MAX_SIZE_Y + SUM_Y || c == 1 + SUM_X || c == MAX_SIZE_X + SUM_X)
				printf("*");
		}
	}
}

void Character_t::printInfo(int x, int y)
{
	int l = 2; //Variable usada por el swithc para imprimir cada valor
	int line = 2 + SUM_Y; //Calculamos la posicion de la pantalla en y
	int column = 2 + SUM_X; //Calculamos la posicion de la pantalla en x
	do {
		locate(column, line); //Situamos donde vamos a escribir
		switch (l) //IMPRIMIMOS DATOS
		{
		default:
		case 2:
			setColor(RED);
			printf("D&D stats");
			break;
		case 3:
			setColor(YELLOW);
			printf("FUE : ");
			setColor(WHITE);
			printf(" %d", m_FUE);
			break;		
		case 4:
			setColor(YELLOW);
			printf("DES : ");
			setColor(WHITE);
			printf(" %d", m_DES);
			break;
		case 5:
			setColor(YELLOW);
			printf("CON : ");
			setColor(WHITE);
			printf(" %d", m_CON);
			break;
		case 6:
			setColor(YELLOW);
			printf("INT : ");
			setColor(WHITE);
			printf(" %d", m_INT);
			break;
		case 7:
			setColor(YELLOW);
			printf("SAB : ");
			setColor(WHITE);
			printf(" %d", m_SAB);
			break;
		case 8:
			setColor(YELLOW);
			printf("CAR : ");
			setColor(WHITE);
			printf(" %d", m_CAR);
			break;
		}
		line++;
		l++;
	} while (l < MAX_SIZE_Y);

	printTab(x, y); //Dibujamos la tabla pasandole la x e y
}

