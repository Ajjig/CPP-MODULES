#include "PhoneBook.hpp"

int main(void) {
    int choice;
    PhoneBook phoneBook = PhoneBook();
    while (true) {
        std::cout << "===========================" << std::endl;
        std::cout << "Choose an option: " << std::endl;
        std::cout << "[ 1 ] Add a contact" << std::endl;
        std::cout << "[ 2 ] Search a contact" << std::endl;
        std::cout << "[ 3 ] Exit" << std::endl;
        std::cout << "===========================" << std::endl;
        std::cout << "Choice: ";
        std::cin >> choice;
        if (choice == 3)
            phoneBook.exit();
        if (std::cin.good() == false) {
            std::cerr << "Invalid input" << std::endl;
            exit(1);
        }
        else if (choice == 1) {
            std::cout << "Enter the first name: ";
            std::string firstName;
            std::cin >> firstName;
            std::cout << "Enter the last name: ";
            std::string lastName;
            std::cin >> lastName;
            std::cout << "Enter the nickname: ";
            std::string nickName;
            std::cin >> nickName;
            std::cout << "Enter the phone number: ";
            std::string phoneNumber;
            std::cin >> phoneNumber;
            std::cout << "Enter the darkest secret: ";
            std::string darkestSecret;
            std::cin >> darkestSecret;
            Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
            phoneBook.add(contact);
        }
        else if (choice == 2) {
            phoneBook.search();
        }
    }
}