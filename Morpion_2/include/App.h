#ifndef APP_H
#define APP_H
#include "Board.h"

class App
{
    public:
        App();
        virtual ~App();
        void Run();
        int checkwin();
    protected:
    private:
        Board b1;
};

#endif // APP_H
