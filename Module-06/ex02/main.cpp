#include <string>
#include <iostream>
#define string std::string


class Base {
    public:
        virtual ~Base() {};
};


class A : public Base {};
class B : public Base {};
class C : public Base {};


Base * generate( void ) {
    int n = std::rand() % 3;
    switch (n) {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }
    return nullptr;
}


void identify(Base * p) {
    A * a = dynamic_cast< A* >(p);
    B * b = dynamic_cast< B* >(p);
    C * c = dynamic_cast< C* >(p);
    if (a) {
        std::cout << "A" << std::endl;
    }
    else if (b) {
        std::cout << "B" << std::endl;
    }
    else if (c) {
        std::cout << "C" << std::endl;
    }
    else {
        std::cout << "Unknown" << std::endl;
    }
}



int main( void ) {
    for (int i = 0; i < 30; ++i) {
        Base * p = generate();
        identify(p);
        delete p;
    }
}