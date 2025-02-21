#include <iostream>

#include "Array.tpp"

int main() {
    Array<int> intA(5);
    std::cout << "Default constructor test: " << intA[0] << std::endl;

    Array<int> intB = intA;
    std::cout << "Copy constructor test: " << intB[0] << std::endl;

    Array<int> IntC;
    IntC = intA;
    std::cout << "Assignment operator test: " << IntC[0] << std::endl;

    intA[0] = 25;
    std::cout << "Element assignment test (intA[0] = 25): " << intA[0]
              << std::endl;
    std::cout << "Check if intB[0] is unchanged: " << intB[0] << std::endl;

    intB[0] = 121738;
    std::cout << "Element assignment test (intB[0] = 121738): " << intB[0]
              << std::endl;
    std::cout << "Check if intA[0] is unchanged: " << intA[0] << std::endl;
    std::cout << "Check if intC[0] is unchanged: " << IntC[0] << std::endl;

    Array<std::string> stringA(5);
    std::cout << "Default constructor test: " << stringA[0] << std::endl;

    Array<std::string> stringB = stringA;
    std::cout << "Copy constructor test: " << stringB[0] << std::endl;

    Array<std::string> stringC;
    stringC = stringA;
    std::cout << "Assignment operator test: " << stringC[0] << std::endl;

    stringA[0] = "hello";
    std::cout << "Element assignment test (StringA[0] = hello): " << stringA[0]
              << std::endl;
    std::cout << "Check if stringB[0] is unchanged: " << stringB[0]
              << std::endl;

    stringB[0] = "world";
    std::cout << "Element assignment test (stringB[0] = world): " << stringB[0]
              << std::endl;
    std::cout << "Check if a[0] is unchanged: " << stringA[0] << std::endl;
    std::cout << "Check if c[0] is unchanged: " << stringC[0] << std::endl;
    try {
        std::cout << "Check out of bounds error " << stringA[10] << std::endl;
    } catch (std::exception &ex) {
        std::cerr << "\n" << ex.what() << std::endl;
    };
    return 0;
}
