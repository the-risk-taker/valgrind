// example from: https://valgrind.org/docs/manual/ms-manual.html

#include <stdlib.h>

void g(void) {
    void* x = malloc(5000);
}

void f(void) {
    void* x = malloc(1000);
    g();
}

int main(void) {
    int i;
    int* a[10];

    for (i = 0; i < 10; i++) {
        a[i] = malloc(1000);
    }

    g();
    f();

    for (i = 0; i < 10; i++) {
        free(a[i]);
    }

    return 0;
}
