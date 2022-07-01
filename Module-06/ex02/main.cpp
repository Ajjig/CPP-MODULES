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

void identify(Base & p) {
    try {
        (void) dynamic_cast< A& >(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e) {}
    
    try {
        (void )dynamic_cast< B& >(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e) {}

    try {
        (void) dynamic_cast< C& >(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e) {}
}

int main( void ) {
    for (int i = 0; i < 10; ++i) {
        Base * p = generate();
        identify(p);
        delete p;
    }
    std::cout << "================================" << std::endl;
    for (int i = 0; i < 10; ++i) {
        Base * p = generate();
        identify(*p);
        delete p;
    }
}