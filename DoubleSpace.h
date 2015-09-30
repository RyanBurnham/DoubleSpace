#ifndef DOUBLE_SPACE
#define DOUBLE_SPACE

#include <iostream>

void print_double_spaced(const char[] cs)
{
    int str_length = strlen(cs);
    for(int index = 0; index < str_length - 1; index++)
        std::cout << cs[index] << ' ';
    std::cout << cs[str_lenth -1];
}

#endif // DOUBLE_SPACE
