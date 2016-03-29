#ifndef PLATEAU_H
#define PLATEAU_H
#include <string>
#include <iostream>

using namespace std;
class Plateau
{
    public:
        string getLigne1();
        string getLigne2();
        string getLigne3();
        string getLigne4();
        void setLigne1(string);
        void setLigne2(string);
        void setLigne3(string);
        void setLigne4(string);
        string ligne1;
        string ligne2;
        string ligne3;
        string ligne4;
        void afficher() const;
        Plateau();
        virtual ~Plateau();
    protected:
    private:

};

#endif // PLATEAU_H
