#include "Character.h"
#include <cstdlib>
#include "rlutil.h"

#define MAX_SIZE_X 11
#define MAX_SIZE_Y 9


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

void printTab()
{
	for (int i = 1; i <= MAX_SIZE_X; i++)
	{
		for (int j = 1; j <= MAX_SIZE_Y; j++)
		{
			locate(i, j);
			setColor(GREEN);
			if (i == 1 || i == MAX_SIZE_X || j == 1 || j == MAX_SIZE_Y)
				printf("*");
		}
	}
}

void Character_t::printInfo()
{

	int line = 2;
	do {
		locate(2, line);
		switch (line)
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
	} while (line < MAX_SIZE_Y);

	printTab();
}

