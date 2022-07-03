#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <vector>

class Span {
    public :
        Span(unsigned int n);
        ~Span();
        void addNumber(int n);
        template < typename Iter >
        void addRange(Iter begin, Iter end) {
            _vec.insert(_vec.begin(), begin, end);
        }
        unsigned int shortestSpan();
        unsigned int longestSpan();
        class FullSpanException : public std::exception {
            public :
                const char * what() const throw() { return "Span is full"; }
        };
        class EmptySpanException : public std::exception {
            public :
                const char * what() const throw() { return "Span is empty"; }
        };
    private :
        unsigned int _n;
        std::vector<int> _vec;
};