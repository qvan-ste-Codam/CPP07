#include <iostream>
#include <string>

#include "iter.hpp"

int main(void) {
    char a[5] = {'a', 'b', 'c', 'd', 'f'};
    std::cout << "Print char array: ";
    iter::iter(a, 5, [](char c) { std::cout << c << ' '; });
    std::cout << std::endl;

    int b[5] = {1, 2, 3, 4, 5};
    std::cout << "Int array before increment: ";
    iter::iter(b, 5, [](int i) { std::cout << i << ' '; });
    std::cout << std::endl;
    iter::iter(b, 5, [](int &i) { i++; });
    std::cout << "Int array after increment: ";
    iter::iter(b, 5, [](int i) { std::cout << i << ' '; });
    std::cout << std::endl;

    std::string c[2] = {"hello", "world"};
    std::cout << "String array before change: ";
    iter::iter(c, 2, [](std::string &s) { std::cout << s << ' '; });
    std::cout << std::endl;
    iter::iter(c, 2, [](std::string &s) { s = "foo"; });
    std::cout << "String array after change: ";
    iter::iter(c, 2, [](std::string &s) { std::cout << s << ' '; });
    std::cout << std::endl;
}
