#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private:
        int value;
        static int nBits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
        int getRawBits();
        void setRawBits(int const raw);
        Fixed & operator = (const Fixed &fixed);
        Fixed & operator + (const Fixed &fixed);
        int toInt() const;
        float toFloat() const;
        std::ostream & operator << (std::ostream & stream, Fixed & fx);
};