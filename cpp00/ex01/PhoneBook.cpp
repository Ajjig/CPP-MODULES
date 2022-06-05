#include "PhoneBook.hpp"

void PhoneBook::add(Contact contact) {
    if (this -> contactCount == 8) {
        this -> contactCount = 0;
        this -> isFull = true;
    }
    this -> contacts[contactCount] = contact;
    this -> contactCount++;
}

void PhoneBook::search() {
    int limit = (this -> isFull) ? 8 : this -> contactCount;
    int index = 0;
    std::cout << std::setw(10) << "INDEX";
    std::cout << " | ";
    std::cout << std::setw(10) << "FIRST NAME";
    std::cout << " | ";
    std::cout << std::setw(10) << "LAST NAME" ;
    std::cout << " | ";
    std::cout << std::setw(10) << "NICKNAME" << std::endl;
    for (int i = 0; i < limit; i++){
        std::cout << std::setw(10) << i;
        //std::cout << std::setw(10) << " | " ;
        std::cout << std::setw(13) << this -> contacts[i].getFirstName();
        //std::cout << std::setw(10) << " | ";
        std::cout << std::setw(13) << this -> contacts[i].getLastName();
        //std::cout << std::setw(10) << " | ";
        std::cout << std::setw(13) << this -> contacts[i].getNickName() << std::endl;
    }
    if (this -> contactCount == 0) {
        std::cout << "No such contact" << std::endl;
        return;
    }
    std::cout << "INDEX : ";
    std::cin >> index;
    if (index <= this -> contactCount - 1) {
        std::cout << "FIRST NAME: " << this -> contacts[index].getFirstName() << std::endl;
        std::cout << "LAST NAME : " << this -> contacts[index].getLastName() << std::endl;
        std::cout << "NICKNAME  : " << this -> contacts[index].getNickName() << std::endl;
        std::cout << "PHONE NUM : " << this -> contacts[index].getPhoneNumber() << std::endl;
        std::cout << "SECRET    : " << this -> contacts[index].getDarkestSecret() << std::endl;
    }
    else std::cout << "No such contact" << std::endl;
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
