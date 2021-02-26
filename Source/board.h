#pragma once
class board
{
	
	
	public:
		board();
		bool isBoardCorrect();
		void putNbrAt(char nbr, int pos);
		char* getCurrentBoard();

	private:
		//---------------parameters 
		char* correctTab;
		char* currentTab;
		int size;
		//---------------end parameters 
};

