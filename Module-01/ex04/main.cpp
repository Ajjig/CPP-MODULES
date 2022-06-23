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
    string fileName = av[1];
    std::ifstream ifile;
    std::ofstream ofile(fileName + ".replace");
    ifile.open(av[1]);
    //ifile.open(addDotReplace(av[1]), std::fstream::out);
    if (ifile.is_open() == false) {
        std::cout << "Make sure the filename is correct: " << av[1] << std::endl;
        return 0;
    }
    //replace any accurances of av[2] with av[3]
    string line;
    while (getline(ifile, line)) {
        ofile << stringReplace(line, av[2], av[3]) << std::endl;
    }
    ifile.close();
    ofile.close();
}
