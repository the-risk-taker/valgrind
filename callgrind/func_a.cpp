int functionA() {
    int a = 0;
    for (int i = 0; i < 200000; i++) {
        a += i;
    }

    return a;
}
