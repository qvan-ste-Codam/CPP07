#include <concepts>

namespace whatever {

template <typename T>
concept Comparable = requires(T a, T b) {
    { a == b } -> std::same_as<bool>;
    { a != b } -> std::same_as<bool>;
    { a < b } -> std::same_as<bool>;
    { a <= b } -> std::same_as<bool>;
    { a > b } -> std::same_as<bool>;
    { a >= b } -> std::same_as<bool>;
};

template <Comparable T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <Comparable T>
T min(T a, T b) {
    return a < b ? a : b;
}

template <Comparable T>
T max(T a, T b) {
    return a > b ? a : b;
}

}  // namespace whatever
