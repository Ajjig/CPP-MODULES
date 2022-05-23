#include "PhoneBook.hpp"

void PhoneBook::add(Contact contact) {
    if (this -> contactCount == 8)
        this -> contactCount = 0;
    this -> contacts[contactCount] = contact;
    this -> contactCount++;
}

void PhoneBook::search(str name) {
    for (int i = 0; i < this -> contactCount; i++) {
        if (this -> contacts[i].getFirstName() == name)
            std::cout << "INDEX          : " << this -> contactCount << std::endl;
            std::cout << "FULL NAME      : " << this -> contacts[i].getFirstName() << contacts[i].getLastName() << std::endl;
            std::cout << "NICKNAME       : " << this -> contacts[i].getNickName() << std::endl;
            std::cout << "PHONE NUMBER   : " << this -> contacts[i].getPhoneNumber() << std::endl;
            std::cout << "DARKEST SECRET : " << this -> contacts[i].getDarkestSecret() << std::endl;
    }
    
}
void PhoneBook::exit() {
    std::exit(0);
}
PhoneBook::PhoneBook() {
    this -> contactCount = 0;
    for (int i = 0; i < 8; i++) {
        this -> contacts[i] = Contact("", "", "", "", "");
    }
}