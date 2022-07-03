#pragma once
#include <iostream>
#include <string>
#include <stack>

template < typename T >
class MutantStack : public std::stack<T> {
    public :
        MutantStack() : std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(const MutantStack & src) : std::stack<T>(src) {}
        MutantStack & operator=(const MutantStack & src) {
            *this = src;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }        
};