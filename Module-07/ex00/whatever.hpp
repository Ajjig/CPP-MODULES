#pragma once
#include <string>
#include <iostream>

template <typename T>
void swap(T & a, T & b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T & a, T & b) {
    return b > a ? a : b;
}

template <typename T>
T max(T & a, T & b) {
    return b > a ? b : a;
}