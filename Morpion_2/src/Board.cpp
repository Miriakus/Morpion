#include "Board.h"
#include <iostream>

using namespace std;

Board::Board()
{
    cout<<"test";

    //ctor
}

Board::~Board()
{
    //dtor
}
char Board::getSquare(int i)
{
        return square[i];
}
void Board::setSquare(int i, char mark)
{

    this->square[i] = mark;
}
void Board::afficher()
{
	cout << "\n\n Morpion\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
