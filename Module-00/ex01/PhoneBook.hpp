#pragma once
#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
    private:
        Contact contacts[8];
        int contactCount;
        bool isFull;

    public:
        PhoneBook();
        void add(Contact contact);
        void exit();
        void search();
        void display();
};
