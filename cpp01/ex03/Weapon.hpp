#include <iostream>
#include <string>
#define string std::string


class Weapon {
    public :
        Weapon(string type);
        ~Weapon();
        void setType(string _type);
        string getType();
    private :
        string type;
};