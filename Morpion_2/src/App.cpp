#include "App.h"
#include <iostream>
#include "Board.h"

using namespace std;

App::App()
{
    //ctor
}

App::~App()
{
    //dtor
}

int App::checkwin()
{
    cout<<"1: "<<b1.getSquare(1)<<endl;
    if (b1.getSquare(1) == b1.getSquare(2)&& b1.getSquare(2) == b1.getSquare(3))

		return 1;
	else if (b1.getSquare(4) == b1.getSquare(5) && b1.getSquare(5) == b1.getSquare(6))

		return 1;
	else if (b1.getSquare(7) == b1.getSquare(8) && b1.getSquare(8) == b1.getSquare(9))

		return 1;
	else if (b1.getSquare(1) == b1.getSquare(4) && b1.getSquare(4) == b1.getSquare(7))

		return 1;
	else if (b1.getSquare(2) == b1.getSquare(5) && b1.getSquare(5) == b1.getSquare(8))

		return 1;
	else if (b1.getSquare(3) == b1.getSquare(6) && b1.getSquare(6) == b1.getSquare(9))

		return 1;
	else if (b1.getSquare(1) == b1.getSquare(5) && b1.getSquare(5) == b1.getSquare(9))

		return 1;
	else if (b1.getSquare(3) == b1.getSquare(5) && b1.getSquare(5) == b1.getSquare(7))

		return 1;
	else if (b1.getSquare(1) != '1' && b1.getSquare(2) != '2' && b1.getSquare(3) != '3'
                    && b1.getSquare(4) != '4' && b1.getSquare(5) != '5' && b1.getSquare(6) != '6'
                  && b1.getSquare(7) != '7' && b1.getSquare(8) != '8' && b1.getSquare(9) != '9')

		return 0;
	else
		return -1;

}
void App::Run()
{
    int player = 1,i,choice;
	char mark;
	do {
        system("cls");
		b1.afficher();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        while(cin.fail())
        {
            if(cin.fail()) {
                cout << "Incorrect value , must be an integer";
            }
            else{
                if(choice < 0 || choice > 9)
                {
                    cout << "Incorrect value, must be between 0 and 9";
                }
            }

            cin.clear();
            cin.ignore();
            cout << "Player " << player << ", enter a number:  ";
            cin >> choice;
        }



		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && b1.getSquare(1) == '1')

			b1.setSquare(1, mark);
		else if (choice == 2 && b1.getSquare(2) == '2')

			b1.setSquare(2, mark);
		else if (choice == 3 && b1.getSquare(3) == '3')

			b1.setSquare(3, mark);
		else if (choice == 4 && b1.getSquare(4) == '4')

			b1.setSquare(4, mark);
		else if (choice == 5 && b1.getSquare(5) == '5')

			b1.setSquare(5, mark);
		else if (choice == 6 && b1.getSquare(6) == '6')

			b1.setSquare(6, mark);
		else if (choice == 7 && b1.getSquare(7) == '7')

			b1.setSquare(7, mark);
		else if (choice == 8 && b1.getSquare(8) == '8')

			b1.setSquare(8, mark);
		else if (choice == 9 && b1.getSquare(9) == '9')

			b1.setSquare(9, mark);
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
            i=checkwin();

		player++;
	}while(i==-1);
	b1.afficher();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
}
