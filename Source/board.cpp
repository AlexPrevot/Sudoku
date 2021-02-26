#include "board.h"


board::board()
{
	size = 81;
	currentTab = new char[size];
	correctTab = new char[size];
}

bool board::isBoardCorrect()
{
	for (int i = 0; i < 81; i++)
	{
		if (currentTab[i] != correctTab[i])
			return false;
	}
	return true;
}

void board::putNbrAt(char nbr, int pos)
{
	currentTab[pos] = nbr;

}

char* board::getCurrentBoard()
{
	return currentTab;
}
