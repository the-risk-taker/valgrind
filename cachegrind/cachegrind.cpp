#include <iostream>

int functionA();

int functionB() {
    int a = 0;
    for (int i = 0; i < 100000; i++) {
        a += i;
    }

    return a;
}

int main() {
    const auto a = functionA();
    const auto b = functionB();

    std::cout << "functionA #" << a << ", functionB #" << b << '\n';
}
