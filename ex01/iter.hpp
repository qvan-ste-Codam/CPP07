#include <stddef.h>

#include <type_traits>

namespace iter {

template <typename T>
concept Array = std::is_array_v<T>;

template <Array T, typename F>
void iter(T& arr, size_t length, F f) {
    for (size_t i = 0; i < length; ++i) {
        f(arr[i]);
    }
}
}  // namespace iter
