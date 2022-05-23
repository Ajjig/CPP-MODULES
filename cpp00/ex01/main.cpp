#include "PhoneBook.hpp"

int main(int ac, char **av) {
    int choice;
    PhoneBook phoneBook = PhoneBook();
    while (true) {
        std::cout << "Choose an option: " << std::endl;
        std::cout << "[ 1 ] Add a contact" << std::endl;
        std::cout << "[ 2 ] Search a contact" << std::endl;
        std::cout << "[ 0 ] Exit" << std::endl;
        std::cin >> choice;
        if (choice == 0)
            phoneBook.exit();
        else if (choice == 1) {
            std::cout << "Enter the first name: " << std::endl;
            std::string firstName;
            std::cin >> firstName;
            std::cout << "Enter the last name: " << std::endl;
            std::string lastName;
            std::cin >> lastName;
            std::cout << "Enter the nickname: " << std::endl;
            std::string nickName;
            std::cin >> nickName;
            std::cout << "Enter the phone number: " << std::endl;
            std::string phoneNumber;
            std::cin >> phoneNumber;
            std::cout << "Enter the darkest secret: " << std::endl;
            std::string darkestSecret;
            std::cin >> darkestSecret;
            Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
            phoneBook.add(contact);
        }
        else if (choice == 2) {
            std::cout << "Enter the name: " << std::endl;
            std::string name;
            std::cin >> name;
            phoneBook.search(name);
        }

    }
}