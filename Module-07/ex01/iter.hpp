#pragma once
#include <string>
#include <iostream>

template< typename T >
void iter(T * tab, size_t length, void (*function) (T &)) {
    for (size_t i = 0; i < length; i++)
        function(tab[i]);
}