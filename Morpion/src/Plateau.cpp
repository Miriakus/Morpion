#include "Plateau.h"

using namespace std;

Plateau::Plateau()
{
    ligne1 = "- A B C";
    ligne2 = "1      ";
    ligne3 = "2      ";
    ligne4 = "3      ";
}
string Plateau::getLigne1()
{
    return ligne1;
}
string Plateau::getLigne2()
{
    return ligne2;
}
string Plateau::getLigne3()
{
    return ligne3;
}
string Plateau::getLigne4()
{
    return ligne4;
}
void Plateau::setLigne1(string ligne1){
    this->ligne1 = ligne1;
}
void Plateau::setLigne2(string ligne2){
    this->ligne2 = ligne2;
}
void Plateau::setLigne3(string ligne3){
    this->ligne3 = ligne3;
}
void Plateau::setLigne4(string ligne4){
    this->ligne4 = ligne4;
}
void Plateau::afficher() const
{
    cout<<ligne1<<"\n"<<ligne2<<"\n"<<ligne3<<"\n"<<ligne4<<endl;
}

Plateau::~Plateau()
{
    //dtor
}
