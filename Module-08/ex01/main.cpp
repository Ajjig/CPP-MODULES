#include "Span.hpp"

int main( void ) {
    Span s(10);
    s.addNumber(-1);
    s.addNumber(-9);
    s.addNumber(4);
    s.addNumber(10);
    s.addNumber(5);
    s.addNumber(2);
    s.addNumber(3);
    s.addNumber(1);
    s.addNumber(-6);
    s.addNumber(7);
    std::cout << "shortestSpan: " << s.shortestSpan() << std::endl; // this should print 1
    std::cout << "longestSpan: " << s.longestSpan() << std::endl;   // this should print 19
    try {
        s.addNumber(11);
    }
    catch (Span::FullSpanException &e) { // Full Span exception should be thrown here
        std::cout << e.what() << std::endl;
    }
}