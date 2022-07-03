#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {
    if (n == 0)
        throw Span::EmptySpanException();
}

void Span::addNumber(int n) {
    if (_vec.size() == _n)
        throw Span::FullSpanException();
    _vec.push_back(n);
}

Span::~Span() {}


unsigned int Span::shortestSpan() {
    if (_vec.size() < 2)
        throw Span::EmptySpanException();
    u_int dist = abs(_vec[0] - _vec[1]);
    for (u_int i = 0; i < _vec.size(); i++) {
        for (u_int j = i + 1; j < _vec.size(); j++) {
            if ( (u_int) abs(_vec[i] - _vec[j]) < dist)
                dist = abs(_vec[i] - _vec[j]);
        }
    }
    return dist;
}

unsigned int Span::longestSpan() {
    if (_vec.size() < 2)
        throw Span::EmptySpanException();
    u_int dist = 0;
    for (u_int i = 0; i < _vec.size(); i++) {
        for (u_int j = i + 1; j < _vec.size(); j++) {
            if ( (u_int) abs(_vec[i] - _vec[j]) > dist)
                dist = abs(_vec[i] - _vec[j]);
        }
    }
    return dist;
}

Span & Span::operator = (const Span & src) {
    if (this == &src)
        return *this;
    _n = src._n;
    _vec = src._vec;
    return *this;
}

Span::Span(const Span & src) {
    _n = src._n;
    _vec = src._vec;
}