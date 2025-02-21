#include <iostream>
#include <string>

#include "iter.hpp"
template <typename T>
static void printContents(T val) {
    std::cout << val << ' ';
}

int main(void) {
    char a[5] = {'a', 'b', 'c', 'd', 'f'};
    std::cout << "Print char array: ";
    iter::iter(a, 5, printContents<char>);
    std::cout << std::endl;

    int b[5] = {1, 2, 3, 4, 5};
    std::cout << "Int array before increment: ";
    iter::iter(b, 5, printContents<int>);
    std::cout << std::endl;
    iter::iter(b, 5, [](int &i) { i++; });
    std::cout << "Int array after increment: ";
    iter::iter(b, 5, printContents<int>);
    std::cout << std::endl;

    std::string c[2] = {"hello", "world"};
    std::cout << "String array before change: ";
    iter::iter(c, 2, printContents<std::string &>);
    std::cout << std::endl;
    iter::iter(c, 2, [](std::string &s) { s = "foo"; });
    std::cout << "String array after change: ";
    iter::iter(c, 2, printContents<std::string &>);
    std::cout << std::endl;

    // int d = 5;
    // iter::iter(d, 1, [](int i) { std::cout << i << ' '; });
}
