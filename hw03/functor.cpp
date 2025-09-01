#include <bits/stdc++.h>
#include <cstdarg>

int sum(int x, ...) {
    va_list args;
    va_start(args, x);
    int total = 0;
    for(int i = 0; i < x; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}


auto addn(int x) {
    auto coef = [x](int y) -> int {
        return x + y;
    };
    return coef;
}


struct Functor{
    int sum = 0;
    Functor(int x) : sum(x) {};
    Functor& operator()(int x) {
        sum += x;
        return *(this);
    }
    operator int() const{
        return this -> sum;
    }
};

auto add(int n) {
    return Functor(n);
}

int main() {
    std::cout << (3 + add(1)(2)(3)) << "\n";
    std::cout << (add(1)(2)(3) + 100) << "\n";
    std::cout << (add(1)(2)(3) << 1) << "\n";
    std::cout << sum(4, 2, 4, 5, 7) << "\n";
    std::cout << addn(1)(100) << "\n";
    return 0;
}