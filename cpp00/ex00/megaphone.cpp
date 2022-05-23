#include <iostream>

int main(int ac, char **av){
    if (ac < 2){
        std::cout << "Usage: ./megaphone {message}" << std::endl;
        return (1);
    }
    for (int j = 1; j < ac; j++) {
        std::string message = av[j];
        for (int i = 0; message[i]; i++) {
            std::cout << (char) toupper(message[i]);
        }
        if (ac > j + 1)
            std::cout << ' ';
    }
}