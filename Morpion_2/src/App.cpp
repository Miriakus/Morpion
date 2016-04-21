#include "App.h"
#include <iostream>
#include "Board.h"
#include <cstdlib>

using namespace std;

App::App()
{
    //ctor
}

App::~App()
{
    //dtor
}

int App::checkwin() //On vérifie les conditions de victoires, 1 : Win, 0 : Draw, -1 : La partie continue
{
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
void App::Run()// Fonction run contenant la plupart de l'intelligence afin qu'elle ne soit pas dans le main.
{
    int player = 1,i,choice,z; //i est la variable de condition de victoire, z est la variable de vérification de cin.
    string value;
	char mark;
	do {
        system("cls");
        z = 0; //réinitialisation de ma variable de vérification
		b1.afficher();
		player=(player%2)?1:2;

		cout << "Joueur " << player << ", entrez un nombre:  ";
        cin >> value;

        while(z != 1){ //Vérification que la valeur est bien un chiffre de 1 à 9
            try{
                choice=std::stoi( value ); //On cast la valeur de value dans un int choice
            }
            catch(exception e)
            {
                choice = -1;                //En cas d'exception donc d'erreur on donne à choice une valeur qui l'empeche de valider la condition suivante.
            }

            if(choice>0 && choice<10){       //Si choice est bien entre 1 et 9 alors on sort de la boucle et on valide la valeur.
                z = 1;
            }
            else if (choice<1 || choice>9){     //Si choice n'est pas un chiffre entre 1 et 9 alors on supprime la valeur donnée par l'utilisateur, on affiche un message d'erreur et on demande une nouvelle valeur.
            system("cls");
            b1.afficher();
            cout << "Valeur incorrecte, choisissez un chiffre de 1 a 9";
            cin.clear();
            cin.ignore();
            cout << "\nJoueur " << player << ", entrez un nombre:  ";
            cin >> value;
            }
        }


		mark=(player == 1) ? 'X' : 'O'; //Détermine si le joueur est O ou X


        //Vérifie que l'emplacement est disponible puis met la marque du joueur dont le tour est en cours
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
			cout<<"Mouvement invalide !";

			player--; //ici on empêche le joueur de changer en cas de mouvement invalide
			cin.ignore();
			cin.get();
		}
            i=checkwin();

		player++;
	}while(i==-1);
	system("cls");
	b1.afficher();
	if(i==1)
        //Utilisation de \a pour faire une alerte lors de la fin d'une partie
		cout<<"==>\aJoueur "<<--player<<" Victoire ";
	else
		cout<<"==>\aEgalite";

	cin.ignore();
	cin.get();
}
