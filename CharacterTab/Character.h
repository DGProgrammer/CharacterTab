struct Character_t
{
	int m_FUE, m_DES, m_CON, m_INT, m_SAB, m_CAR;


	Character_t(int FUE, int DES, int CON, int INT, int SAB, int CAR);
	Character_t() {}; //Constructor para poder hacer array

	void printInfo(int x, int y); //Nos pide cordenada x e y para la pos donde imprimir
};