#include <iostream>
#include <fstream>
#define string std::string

string stringReplace(string str, string oldStr, string newStr) {
    size_t tmp;

    while (str.find(oldStr) != string::npos) {
        tmp = str.find(oldStr);
        str = str.substr(0, tmp) + newStr + str.substr(tmp + oldStr.length());
        /* replace oldStr with newStr // splits str into two parts, then concatenates them together */
    }

    return str;
}

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cout << ((ac > 4) ? "Too many args" : "Too few args") << std::endl;
        std::cout << "Usage: " << av[0] << " {filename} {to replace string} {replaced with}" << std::endl;
        return 0;
    }

}