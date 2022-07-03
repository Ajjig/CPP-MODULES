#pragma once
#include <algorithm>

template < typename T >
int easyfind(T & container, int target) {
    int i = 0;
    for (typename T::iterator it = container.begin(); it != container.end(); it++) {
        if (*it == target) {
            return i;
        }
        i++;
    }
    return -1;
}