#include <iostream>
#include <string>

#include "whatever.hpp"

int main(void) {
    std::string s1 = "foo";
    std::string s2 = "bar";
    whatever::swap(s1, s2);
    std::cout << "a: " << s1 << " b: " << s2 << '\n';
    std::cout << whatever::min<int>(1, 2) << std::endl;
    std::cout << whatever::max<int>(100, 2000) << std::endl;
    int a = 2;
    int b = 3;
    whatever::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << whatever::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << whatever::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    whatever::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << whatever::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << whatever::max(c, d) << std::endl;
}
