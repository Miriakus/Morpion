#include <iostream>
#include "Plateau.h"

using namespace std;

int main()
{
    cout << "Jeu de Morpion !" << endl;
    int coups = 1, croix = 1, rond = 0;
    string choix, plateau;
    Plateau p1;


    while (coups != 10)
    {
        cout << "Tour numero " << coups << endl << endl;
        if(croix == 1)
        {
            cout << "Au tour des croix." << endl << endl;
            // CHOIX INVALIDE
        if(choix != "A1" || "A2" || "A3" || "B1" || "B2" || "B3" || "C1" || "C2" || "C3")
        {
            cout << "Choix invalide. Veuillez choisir une case valide." << endl << endl;
        }
        }
        else if(rond == 1)
        {
            cout << "Au tour des ronds." << endl << endl;
            // CHOIX INVALIDE
        if(choix != "A1" || "A2" || "A3" || "B1" || "B2" || "B3" || "C1" || "C2" || "C3")
        {
            cout << "Choix invalide. Veuillez choisir une case valide." << endl << endl;
        }
        }

        cout << p1.ligne1 << endl;
        cout << p1.ligne2 << endl;
        cout << p1.ligne3 << endl;
        cout << p1.ligne4 << endl << endl;

        cout << "Quelle case voulez-vous ? (Lettre/Chiffre)" << endl;
        cin >> choix;

        // POSSIBILITES

        if(choix == "A1")
        {
            if(croix == 1)
            {
                if(p1.ligne2[2] != 'X' && p1.ligne2[2] != 'O')
                {
                    p1.ligne2[2] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne2[2] != 'X' && p1.ligne2[2] != 'O')
                {
                    p1.ligne2[2] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "A2")
        {
            if(croix == 1)
            {
                if(p1.ligne3[2] != 'X' && p1.ligne3[2] != 'O')
                {
                    p1.ligne3[2] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne3[2] != 'X' && p1.ligne3[2] != 'O')
                {
                    p1.ligne3[2] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "A3")
        {
            if(croix == 1)
            {
                if(p1.ligne4[2] != 'X' && p1.ligne4[2] != 'O')
                {
                    p1.ligne4[2] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne4[2] != 'X' && p1.ligne4[2] != 'O')
                {
                    p1.ligne4[2] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "B1")
        {
            if(croix == 1)
            {
                if(p1.ligne2[4] != 'X' && p1.ligne2[4] != 'O')
                {
                    p1.ligne2[4] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne2[4] != 'X' && p1.ligne2[4] != 'O')
                {
                    p1.ligne2[4] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "B2")
        {
            if(croix == 1)
            {
                if(p1.ligne3[4] != 'X' && p1.ligne3[4] != 'O')
                {
                    p1.ligne3[4] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne3[4] != 'X' && p1.ligne3[4] != 'O')
                {
                    p1.ligne3[4] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "B3")
        {
            if(croix == 1)
            {
                if(p1.ligne4[4] != 'X' && p1.ligne4[4] != 'O')
                {
                    p1.ligne4[4] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne4[4] != 'X' && p1.ligne4[4] != 'O')
                {
                    p1.ligne4[4] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "C1")
        {
            if(croix == 1)
            {
                if(p1.ligne2[6] != 'X' && p1.ligne2[6] != 'O')
                {
                    p1.ligne2[6] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne2[6] != 'X' && p1.ligne2[6] != 'O')
                {
                    p1.ligne2[6] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "C2")
        {
            if(croix == 1)
            {
                if(p1.ligne3[6] != 'X' && p1.ligne3[6] != 'O')
                {
                    p1.ligne3[6] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne3[6] != 'X' && p1.ligne3[6] != 'O')
                {
                    p1.ligne3[6] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }
        else if(choix == "C3")
        {
            if(croix == 1)
            {
                if(p1.ligne4[6] != 'X' && p1.ligne4[6] != 'O')
                {
                    p1.ligne4[6] = 'X';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
            else if(rond == 1)
            {
                if(p1.ligne4[6] != 'X' && p1.ligne4[6] != 'O')
                {
                    p1.ligne4[6] = 'O';
                    coups++;
                    if(croix == 1)
                        {
                            croix = 0;
                            rond = 1;
                        }
                        else if(rond == 1)
                        {
                            croix = 1;
                            rond = 0;
                        }
                }
            }
        }


        // VICTOIRES CROIX :

         if(p1.ligne2[2] == 'X' && p1.ligne2[4] == 'X' && p1.ligne2[6] == 'X' ||
           p1.ligne3[2] == 'X' && p1.ligne3[4] == 'X' && p1.ligne3[6] == 'X' ||
           p1.ligne4[2] == 'X' && p1.ligne4[4] == 'X' && p1.ligne4[6] == 'X' ||
           p1.ligne2[2] == 'X' && p1.ligne3[2] == 'X' && p1.ligne4[2] == 'X' ||
           p1.ligne2[4] == 'X' && p1.ligne3[4] == 'X' && p1.ligne4[4] == 'X' ||
           p1.ligne2[6] == 'X' && p1.ligne3[6] == 'X' && p1.ligne4[6] == 'X' ||
           p1.ligne2[2] == 'X' && p1.ligne3[4] == 'X' && p1.ligne4[6] == 'X' ||
           p1.ligne2[6] == 'X' && p1.ligne3[4] == 'X' && p1.ligne4[2] == 'X')
        {
            cout << "Bravo ! Le joueur X gagne." << endl;
            coups = 10;
        }

        // VICTOIRES RONDS :

        if(p1.ligne2[2] == 'O' && p1.ligne2[4] == 'O' && p1.ligne2[6] == 'O' ||
           p1.ligne3[2] == 'O' && p1.ligne3[4] == 'O' && p1.ligne3[6] == 'O' ||
           p1.ligne4[2] == 'O' && p1.ligne4[4] == 'O' && p1.ligne4[6] == 'O' ||
           p1.ligne2[2] == 'O' && p1.ligne3[2] == 'O' && p1.ligne4[2] == 'O' ||
           p1.ligne2[4] == 'O' && p1.ligne3[4] == 'O' && p1.ligne4[4] == 'O' ||
           p1.ligne2[6] == 'O' && p1.ligne3[6] == 'O' && p1.ligne4[6] == 'O' ||
           p1.ligne2[2] == 'O' && p1.ligne3[4] == 'O' && p1.ligne4[6] == 'O' ||
           p1.ligne2[6] == 'O' && p1.ligne3[4] == 'O' && p1.ligne4[2] == 'O')
        {
            cout << "Bravo ! Le joueur O gagne." << endl;
            coups = 10;
        }

        // CHANGEMENT DE JOUEUR
        //J'ai mis le changement de joueur dans les résultats d'un coup réussi.

       /* if(croix == 1)
        {
            croix = 0;
            rond = 1;
        }
        else if(rond == 1)
        {
            croix = 1;
            rond = 0;
        }*/

        cout <<  endl << endl;
    }

    if(coups == 10)
    {
        cout << "Merci d'avoir joue !" << endl << endl;
    }

    return 0;
}
