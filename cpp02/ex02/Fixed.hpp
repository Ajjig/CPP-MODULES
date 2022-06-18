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
        int toInt() const;
        float toFloat() const;
        // COMPARISON OPERATORS
        bool operator > (const Fixed &fixed) const;
        bool operator < (const Fixed &fixed) const;
        bool operator >= (const Fixed &fixed) const;
        bool operator <= (const Fixed &fixed) const;
        bool operator == (const Fixed &fixed) const;
        bool operator != (const Fixed &fixed) const;
        // ARITHMETIC OPERATORS
        Fixed & operator ++ ();  // Pre
        Fixed & operator -- ();  // Pre
        Fixed operator ++ (int); // Post
        Fixed operator -- (int); // Post
        Fixed operator + (const Fixed &fixed) const;
        Fixed operator - (const Fixed &fixed) const;
        Fixed operator * (const Fixed &fixed) const;
        Fixed operator / (const Fixed &fixed) const;

        // STATIC MEMBER
        static Fixed & min(Fixed &fixed1, Fixed &fixed2);
        static Fixed & max(Fixed &fixed1, Fixed &fixed2);
        static Fixed const & min(Fixed const &fixed1, Fixed const &fixed2);
        static Fixed const & max(Fixed const &fixed1, Fixed const &fixed2);
        

        
};

std::ostream & operator << (std::ostream & out, Fixed const & fx);
