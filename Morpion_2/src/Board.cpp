#include "Board.h"
#include <iostream>

using namespace std;

Board::Board()
{

    //ctor
}

Board::~Board()
{
    //dtor
}
char Board::getSquare(int i) //getter
{
        return square[i];
}
void Board::setSquare(int i, char mark) //setter
{

    this->square[i] = mark;
}
void Board::afficher() //On affiche le tableau
{
	cout << "\n\n Morpion\n\n";

	cout << "Joueur 1 (X)  -  Joueur 2 (O)" << endl << endl;
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
