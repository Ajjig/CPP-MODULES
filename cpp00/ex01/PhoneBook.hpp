#pragma once
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int contactCount;

    public:
        PhoneBook();
        void add(Contact contact);
        void exit();
        void search(str name);
};
