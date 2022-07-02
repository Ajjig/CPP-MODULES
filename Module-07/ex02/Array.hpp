#pragma once
#include <iostream>
#include <string>
#include <exception>
#define string std::string


template < typename T >
class Array {
    public:
        Array( void );
        Array( unsigned int length );
        ~Array( void );
        T & operator [] (int index);
        const T & operator [] (int index) const;
        unsigned int size();
        Array & operator = (Array & rhs);
        Array( Array & src );
        class IndexOutOfRangeException : public std::exception {
            public:
                const char * what() const throw() { return "Index out of range"; }
        };
    private:
        T * _array;
        unsigned int _length;
};
