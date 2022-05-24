#include "PhoneBook.hpp"

void PhoneBook::add(Contact contact) {
    if (this -> contactCount == 8) {
        this -> contactCount = 0;
        this -> isFull = true;
    }
    this -> contacts[contactCount] = contact;
    this -> contactCount++;
}

void PhoneBook::search(str name) {
    int limit = (this -> isFull) ? 8 : this -> contactCount;
    for (int i = 0; i < limit; i++) {
        if (this -> contacts[i].getFirstName() == name) {
            std::cout << "INDEX          : " << this -> contactCount << std::endl;
            std::cout << "FULL NAME      : " << this -> contacts[i].getFirstName() + " " << contacts[i].getLastName() << std::endl;
            std::cout << "NICKNAME       : " << this -> contacts[i].getNickName() << std::endl;
            std::cout << "PHONE NUMBER   : " << this -> contacts[i].getPhoneNumber() << std::endl;
            std::cout << "DARKEST SECRET : " << this -> contacts[i].getDarkestSecret() << std::endl;
            return ;
        }
    }
    std::cout << "No such contact" << std::endl;
    
}
void PhoneBook::exit() {
    std::exit(0);
}
PhoneBook::PhoneBook() {
    this -> contactCount = 0;
    this -> isFull = false;
    for (int i = 0; i < 8; i++) {
        this -> contacts[i] = Contact();
    }
}
void PhoneBook::display() {
    int limit = (this -> isFull) ? 8 : this -> contactCount;
    for (int i = 0; i < limit; i++) {
        std::cout << "=================== " << i + 1 << " ===================" << std::endl;
        std::cout << "FULL NAME      : " << this -> contacts[i].getFirstName() + " " << contacts[i].getLastName() << std::endl;
        std::cout << "NICKNAME       : " << this -> contacts[i].getNickName() << std::endl;
        std::cout << "PHONE NUMBER   : " << this -> contacts[i].getPhoneNumber() << std::endl;
        std::cout << "DARKEST SECRET : " << this -> contacts[i].getDarkestSecret() << std::endl;
    }
}