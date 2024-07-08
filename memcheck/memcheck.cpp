void memory_leak() {
    int* leak = new int[10];
}

void out_of_bound_access() {
    int* array = new int[5];
    for (int i = 0; i <= 5; ++i) {
        array[i] = i;
    }
    delete[] array;
}

int main() {
    memory_leak();
    out_of_bound_access();
    return 0;
}
