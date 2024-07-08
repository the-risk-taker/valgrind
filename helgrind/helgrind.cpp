#include <iostream>
#include <thread>
#include <vector>

int main() {
    int counter = 0;
    static constexpr int NUMBER_OF_THREADS = 16;

    std::vector<std::thread> threads;

    for (int i = 0; i < NUMBER_OF_THREADS; i++) {
        threads.push_back(std::thread([&counter]() { counter++; }));
    }

    for (int i = 0; i < NUMBER_OF_THREADS; i++) {
        threads[i].join();
    }

    std::cout << "counter = " << counter << '\n';

    return 0;
}
