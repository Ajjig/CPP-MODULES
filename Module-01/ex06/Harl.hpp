#include <iostream>
#include <string>
#define string std::string

class Harl {
    public :
        Harl();
        ~Harl();
        void complain(string level);
    private :
        void info();
        void warning();
        void error();
        void debug();
};


