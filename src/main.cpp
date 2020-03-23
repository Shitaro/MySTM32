#include <iostream>

template <typename T>
inline constexpr T add(T a, T b) {
    return a + b;
}

int main() {
    constexpr int a = 1;
    constexpr int b = 1;
    constexpr auto c = add(a,b);

    std::cout << c << std::endl;

    return 0;
}