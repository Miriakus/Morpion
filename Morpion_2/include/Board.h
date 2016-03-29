#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        void afficher();
        char getSquare(int i);
        void setSquare(int i, char mark);
        Board();
        virtual ~Board();
    protected:
    private:
        char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
};

#endif // BOARD_H
