#pragma once
#include <iostream>
#include <string>
#define string std::string

class UnknownStr {
    public :
        UnknownStr(string s);
        ~UnknownStr();
        string getType();
        string getStr();
        void print() const;
        class InvalidStrException {
            public :
                const char* what() const throw();
        };
    private :
        const string _str;
        void toFloat() const;
        void toInt() const;
        void toChar() const;
        void toDouble() const;
        void isValid() const;
        bool isPsuedo() const;
};

