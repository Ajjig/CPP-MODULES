#include "UnknownStr.hpp"

UnknownStr::UnknownStr(string s) : _str(s) {
    isValid();
}

bool UnknownStr::isPsuedo() const {
    return _str == "nan" || _str == "nanf" || _str == "+inf" || _str == "inf" || _str == "-inf" || _str == "+inff" || _str == "inff" || _str == "-inff";
}

string UnknownStr::getStr() {
    return this -> _str;
}

void UnknownStr::isValid() const {
    if (isPsuedo()) {
        return;
    }
    int dot = 0;
    if (this -> _str.size() == 0)
        throw InvalidStrException();
    for (u_long i = 0; i < this -> _str.length(); i++) {
        if (i == 0 && (this -> _str[i] == '-' || this -> _str[i] == '+'))
            continue;
        if (i + 1 == this -> _str.length()) {
            if (this -> _str[i] == '.')
                throw InvalidStrException();
            if (_str[i] == 'f')
                break;
        }
        if (_str[i] == '.') {
            if (++dot > 1)
                throw InvalidStrException();
            continue;
        }
        if (isdigit(_str[i]) == false)
            throw InvalidStrException();
    }
}

void UnknownStr::print() const {
    this -> toChar();
    this -> toInt();
    this -> toFloat();
    this -> toDouble();
}

UnknownStr::~UnknownStr() {}


const char * UnknownStr::InvalidStrException::what() const throw() {
    return "Invalid Str Exception";
}

void UnknownStr::toFloat() const {
    float f = std::strtof(_str.c_str(), NULL);
    std::cout << "float: " << f << (f == static_cast<int>(f) ? ".0f" : "f") << std::endl;
}

void UnknownStr::toInt() const {
    if (isPsuedo()) {
        std::cout << "int: {Impossible}" << std::endl;
        return;
    }
    int i = std::atoi(_str.c_str());
    std::cout << "int: " << i << std::endl;
}

void UnknownStr::toDouble() const {
    double d = std::strtod(_str.c_str(), NULL);
    std::cout << "double: " << d << (d - static_cast<int>(d) == 0 ? ".0" : "") << std::endl;
}

void UnknownStr::toChar() const {
    if (isPsuedo()) {
        std::cout << "char: {Impossible}" << std::endl;
        return;
    }
    char c = static_cast<char>(std::atoi(_str.c_str()));
    std::cout << "char: ";
    if (c >= 32 && c != 127)
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "{Non Printable}" << std::endl;
}
